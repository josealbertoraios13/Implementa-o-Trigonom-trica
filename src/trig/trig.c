#include <stdio.h>
#include "trig.h"

double m_rad_to_deg(double x){
    return x * (DEG_180 / PI);
}

double m_deg_to_rad(double x){
    return x * (PI / DEG_180);
}

double m_abs(double x){
    return x < 0 ? -x : x;
}

double m_sqrt(double x){
    if (x < 0)
    {
        return M_NAN;
    }
    
    if (x == 0)
    {
        return 0;
    }

    double current_x = x / 2;
    double last_x = 0;

    while (m_abs(current_x - last_x) > PRECISION)
    {
        last_x = current_x;
        current_x = (last_x + x / last_x) / 2;
    }
    
    return current_x;
}

double m_exp(double x){
    double term = 1.0;
    double sum  = 1.0;

    for (int i = 1; i < 100; i++)
    {
        term *= x / i;
        sum += term;

        if(m_abs(term) < PRECISION){
            break;
        }
    }

    return sum;
}

double m_ln(double x){
    if (x <= 0){
        return M_NAN;
    }

    if(x == 1){
        return 0;
    }

    double k = 0.0;
    double m = x;

    while (m >= 2)
    {
        m = m / 2;
        k = k + 1;
    }
    
    while (m < 1)
    {
        m = m * 2;
        k = k - 1;
    }
    
    double ln = m_ln_series(m);

    return ln + k * M_LN2;
}

double m_ln_series(double m){
    double y = (m - 1) / (m + 1);
    double y2 = y * y;
    double term = y;
    double sum = 0.0;
    
    int n = 1;

    while (m_abs(term) > PRECISION)
    {
        sum = sum + term / n;
        term = term * y2;
        n = n + 2;
    }
    
    return 2 * sum;
}

double m_mod(double a, double b){
    long long q = (long long)(a / b);

    double r = a - ((double)q * b);

    if (r < 0){
        r += b;
    }

    return r;
}

double m_sin(double rad){
    double x = m_mod(rad, 2 * PI);

    if(x > PI){
        x -= 2 * PI;
    }

    double term = x;
    double sin_value = term;

    for (int n = 1; n < ITERATIONS; n++){
        term *= -x * x / ((2 * n) * ((2 * n) + 1));
        sin_value += term;

        if(m_abs(term) < PRECISION){
            break;
        }
    }
    
    return sin_value;
}

double m_cos(double rad){
    double x = m_mod(rad, 2 * PI);

    if(x > PI){
        x -= 2 * PI;
    }

    double term = 1.0;
    double cos_value = term;

    for (int n = 1; n < ITERATIONS; n++){
        term *= -x * x / (((2 * n ) - 1) * (2 * n));
        cos_value += term;

        if(m_abs(term) < PRECISION){
            break;
        }
    }
    
    return cos_value;
}

double m_tan(double rad){
    double sin_value = m_sin(rad);
    double cos_value = m_cos(rad);

    if(m_abs(cos_value) < PRECISION){
        return M_NAN;
    }

    return sin_value / cos_value;
}

double m_sec(double rad){
    double cos_value = m_cos(rad);

    if(m_abs(cos_value) < PRECISION){
        return M_NAN;
    }

    return 1 / cos_value;
}

double m_csc(double rad){
    double sin_value = m_sin(rad);

    if(m_abs(sin_value) < PRECISION){
        return M_NAN;
    }

    return 1 / sin_value;
}

double m_cot(double rad){
    double tan_value = m_tan(rad);

    if(m_abs(tan_value) < PRECISION){
        return M_NAN;
    }

    return 1 / tan_value;
}

double m_sinh(double x){
    return (m_exp(x) - m_exp(-x)) / 2;
}

double m_cosh(double x){
    return (m_exp(x) + m_exp(-x)) / 2;
}

double m_tanh(double x){
    return m_sinh(x) / m_cosh(x);
}

double m_sech(double x){
    return 1 / m_cosh(x);
}

double m_csch(double x){
    return 1 / m_sinh(x);
}

double m_coth(double x){
    return 1 / m_tanh(x);
}

double m_arctan(double x){
    if (x > 1){
        return (PI / 2) - m_arctan(1 / x);
    }

    if (x < -1){
        return (-PI / 2) - m_arctan(1 / x);
    }

    if (m_abs(x) > 0.5) {
        return 2 * m_arctan(x / (1 + m_sqrt(1 + (x * x))));
    }

    double term = x;
    double arcatan_value = term;

    for (int n = 1; n < ITERATIONS; n++){
        term *= -x * x;
        double add = term / ((2 * n) + 1);
        arcatan_value += add;

        if(m_abs(add) < PRECISION){
            break;
        }
    }
    
    return arcatan_value;
}

double m_arcsin(double x){
    if(x < -1.0 || x > 1.0){
        return M_NAN;
    }

    if(x == 1.0){
        return PI / 2;
    }

    if(x == -1){
        return -PI / 2;
    }

    return m_arctan(x / m_sqrt(1.0 - (x * x)));
}

double m_arccos(double x){
    if (x < -1.0 || x > 1.0){
        return M_NAN;
    }

    return (PI / 2) - m_arcsin(x);
}

double m_arcsec(double x){
    if(m_abs(x) < 1){
        return M_NAN;
    }

    return m_arccos(1.0 / x);
}

double m_arccsc(double x){
    if(m_abs(x) < 1){
        return M_NAN;
    }

    return m_arcsin(1.0 / x);
}

double m_arccot(double x){
    if(x > 0){
        return m_arctan(1.0 / x);
    }

    if(x < 0){
        return m_arctan(1.0 / x) + PI;
    }
    
    return PI / 2;
}

double m_arcsinh(double x){
    return m_ln(x + m_sqrt((x * x) + 1));
}

double m_arccosh(double x){
    return m_ln(x + m_sqrt((x * x) - 1));
}

double m_arctanh(double x){
    return 0.5 * m_ln((1 + x) / (1 - x));
}

double m_arcsech(double x){
    return m_arccosh(1 / x);
}

double m_arccsch(double x){
    return m_arcsinh(1 / x);
}

double m_arccoth(double x){
    return 0.5 * m_ln((x + 1) / (x - 1));
}
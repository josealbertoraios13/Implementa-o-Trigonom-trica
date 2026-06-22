#include <stdio.h>
#include "trig.h"

double rad_to_deg(double n){
    return n * (MID_ANGLE / PI);
}

double deg_to_rad(double n){
    return n * (PI / MID_ANGLE);
}

static double module(double a, double b){
    long long q = (long long)(a / b);

    double r = a - ((double)q * b);

    if (r < 0){
        r += b;
    }

    return r;
}

static double m_abs(double x){
    return x < 0 ? -x : x;
}

double m_sin(double rad){
    double x = module(rad, 2 * PI);

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
    double x = module(rad, 2 * PI);

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
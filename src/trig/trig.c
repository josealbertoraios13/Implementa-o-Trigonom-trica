#include <stdio.h>
#include <math.h>

#include "trig.h"

double module(double a, double b){
    long long q = (long long)(a / b);

    double r = a - ((double)q * b);

    if (r < 0){
        r += b;
    }

    return r;
}

double rad_to_deg(double n){
    return n * (MID_ANGLE / PI);
}

double deg_to_rad(double n){
    return n * (PI / MID_ANGLE);
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

        if(fabs(term) < PRECISION){
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

        if(fabs(term) < PRECISION){
            break;
        }
    }
    
    return cos_value;
}

double m_tan(double rad){
    double sin_value = m_sin(rad);
    double cos_value = m_cos(rad);

    if(fabs(cos_value) < PRECISION){
        return NAN;
    }

    return sin_value / cos_value;
}
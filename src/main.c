#include <stdio.h>
#include "trig.h"

int main(void){
    printf("=== SENO ===\n");
    printf("sin(0)      = %.10f\n", m_sin(0));
    printf("sin(PI/6)   = %.10f\n", m_sin(PI / 6));
    printf("sin(PI/4)   = %.10f\n", m_sin(PI / 4));
    printf("sin(PI/2)   = %.10f\n", m_sin(PI / 2));
    printf("sin(PI)     = %.10f\n", m_sin(PI));

    printf("\n=== COSSENO ===\n");
    printf("cos(0)      = %.10f\n", m_cos(0));
    printf("cos(PI/6)   = %.10f\n", m_cos(PI / 6));
    printf("cos(PI/4)   = %.10f\n", m_cos(PI / 4));
    printf("cos(PI/2)   = %.10f\n", m_cos(PI / 2));
    printf("cos(PI)     = %.10f\n", m_cos(PI));

    printf("\n=== TANGENTE ===\n");
    printf("tan(0)      = %.10f\n", m_tan(0));
    printf("tan(PI/6)   = %.10f\n", m_tan(PI / 6));
    printf("tan(PI/4)   = %.10f\n", m_tan(PI / 4));
    printf("tan(PI/3)   = %.10f\n", m_tan(PI / 3));

    printf("\n=== CONVERSAO ===\n");
    printf("180 graus -> %.10f rad\n", deg_to_rad(180));
    printf("90 graus  -> %.10f rad\n", deg_to_rad(90));
    printf("PI rad    -> %.10f graus\n", rad_to_deg(PI));
    printf("PI/2 rad  -> %.10f graus\n", rad_to_deg(PI / 2));

    return 0;
}
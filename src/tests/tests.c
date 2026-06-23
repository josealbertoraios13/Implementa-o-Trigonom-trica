#include <stdio.h>
#include "trig.h"
#include "tests.h"

void rad_and_deg_convertion_test(){

    printf("\n=== DEGREES TO RADIANS ===\n");
    printf("0°   = %.10f rad\n", m_deg_to_rad(DEG_0));
    printf("30°  = %.10f rad\n", m_deg_to_rad(DEG_30));
    printf("45°  = %.10f rad\n", m_deg_to_rad(DEG_45));
    printf("60°  = %.10f rad\n", m_deg_to_rad(DEG_60));
    printf("90°  = %.10f rad\n", m_deg_to_rad(DEG_90));
    printf("180° = %.10f rad\n", m_deg_to_rad(DEG_180));
    printf("360° = %.10f rad\n", m_deg_to_rad(DEG_360));

    printf("\n=== RADIANS -> DEGREES ===\n");
    printf("0      = %.10f°\n", m_rad_to_deg(RAD_0));
    printf("PI/6   = %.10f°\n", m_rad_to_deg(RAD_30));
    printf("PI/4   = %.10f°\n", m_rad_to_deg(RAD_45));
    printf("PI/3   = %.10f°\n", m_rad_to_deg(RAD_60));
    printf("PI/2   = %.10f°\n", m_rad_to_deg(RAD_90));
    printf("PI     = %.10f°\n", m_rad_to_deg(PI));
    printf("2*PI   = %.10f°\n", m_rad_to_deg(RAD_360));
}

void absolute_value_test(){
    printf("\n=== ABSOLUTE VALUE ===\n");

    printf("abs(0)        = %.10f\n", m_abs(0));
    printf("abs(1)        = %.10f\n", m_abs(1));
    printf("abs(-1)       = %.10f\n", m_abs(-1));

    printf("abs(10.5)     = %.10f\n", m_abs(10.5));
    printf("abs(-10.5)    = %.10f\n", m_abs(-10.5));

    printf("abs(1234.567) = %.10f\n", m_abs(1234.567));
    printf("abs(-1234.567)= %.10f\n", m_abs(-1234.567));

    printf("abs(PI)       = %.10f\n", m_abs(PI));
    printf("abs(-PI)      = %.10f\n", m_abs(-PI));

    const double x = -42.75;

    printf("abs(x) == abs(-x): %s\n",
    m_abs(x) == m_abs(-x) ? "true" : "false");
}

void sqrt_test(){
    printf("\n=== SQUARE ROOT ===\n");

    printf("sqrt(0)  = %.10f\n", m_sqrt(0));
    printf("sqrt(1)  = %.10f\n", m_sqrt(1));

    printf("sqrt(2)  = %.10f\n", m_sqrt(2));
    printf("sqrt(4)  = %.10f\n", m_sqrt(4));

    printf("sqrt(9)  = %.10f\n", m_sqrt(9));
    printf("sqrt(25) = %.10f\n", m_sqrt(25));

    printf("sqrt(81) = %.10f\n", m_sqrt(81));
}

void module_test(){
    printf("\n=== MODULO ===\n");

    printf("mod(10, 3)      = %.10f\n", m_mod(10, 3));
    printf("mod(20, 7)      = %.10f\n", m_mod(20, 7));

    printf("mod(5.5, 2.0)   = %.10f\n", m_mod(5.5, 2.0));
    printf("mod(7.8, 2.5)   = %.10f\n", m_mod(7.8, 2.5));

    printf("mod(-10, 3)     = %.10f\n", m_mod(-10, 3));
    printf("mod(-20, 7)     = %.10f\n", m_mod(-20, 7));

    printf("mod(PI, 2)      = %.10f\n", m_mod(PI, 2));
    printf("mod(2*PI, PI)   = %.10f\n", m_mod(2 * PI, PI));
}

void trigonometric_functions_test1(){
    printf("\n=== FUNDAMENTAL TRIGONOMETRIC FUNCTIONS ===\n");

    printf("\n[SENO]\n");
    printf("sin(0)      = %.10f\n", m_sin(RAD_0));
    printf("sin(PI/6)   = %.10f\n", m_sin(RAD_30));
    printf("sin(PI/4)   = %.10f\n", m_sin(RAD_45));
    printf("sin(PI/2)   = %.10f\n", m_sin(RAD_90));
    printf("sin(PI)     = %.10f\n", m_sin(RAD_180));

    printf("\n[COSSENO]\n");
    printf("cos(0)      = %.10f\n", m_cos(RAD_0));
    printf("cos(PI/6)   = %.10f\n", m_cos(RAD_30));
    printf("cos(PI/4)   = %.10f\n", m_cos(RAD_45));
    printf("cos(PI/2)   = %.10f\n", m_cos(RAD_90));
    printf("cos(PI)     = %.10f\n", m_cos(RAD_180));

    printf("\n[TANGENTE]\n");
    printf("tan(0)      = %.10f\n", m_tan(RAD_0));
    printf("tan(PI/6)   = %.10f\n", m_tan(RAD_30));
    printf("tan(PI/4)   = %.10f\n", m_tan(RAD_45));
    printf("tan(PI/3)   = %.10f\n", m_tan(RAD_60));
}

void trigonometric_functions_test2(){
    printf("\n=== RECIPROCAL TRIGONOMETRIC FUNCTIONS ===\n");

    printf("\n[SECANTE]\n");
    printf("sec(0)      = %.10f\n", m_sec(RAD_0));
    printf("sec(PI/6)   = %.10f\n", m_sec(RAD_30));
    printf("sec(PI/4)   = %.10f\n", m_sec(RAD_45));
    printf("sec(PI/3)   = %.10f\n", m_sec(RAD_60));

    printf("\n[COSSECANTE]\n");
    printf("csc(PI/6)   = %.10f\n", m_csc(RAD_30));
    printf("csc(PI/4)   = %.10f\n", m_csc(RAD_45));
    printf("csc(PI/3)   = %.10f\n", m_csc(RAD_60));
    printf("csc(PI/2)   = %.10f\n", m_csc(RAD_90));

    printf("\n[COTANGENTE]\n");
    printf("cot(PI/6)   = %.10f\n", m_cot(RAD_30));
    printf("cot(PI/4)   = %.10f\n", m_cot(RAD_45));
    printf("cot(PI/3)   = %.10f\n", m_cot(RAD_60));
}

void trigonometric_functions_test3(){
    printf("\n=== INVERSE TRIGONOMETRIC FUNCTIONS ===\n");

    printf("\n[ARCOSIN]\n");
    printf("arcosin(0)      = %.10f\n", m_arcsin(RAD_0));
    printf("arcosin(PI/6)   = %.10f\n", m_arcsin(RAD_30));
    printf("arcosin(PI/4)   = %.10f\n", m_arcsin(RAD_45));
    printf("arcosin(PI/3)   = %.10f\n", m_arcsin(RAD_60));

    printf("\n[ARCCOS]\n");
    printf("arccos(PI/6)   = %.10f\n", m_arccos(RAD_30));
    printf("arccos(PI/4)   = %.10f\n", m_arccos(RAD_45));
    printf("arccos(PI/3)   = %.10f\n", m_arccos(RAD_60));
    printf("arccos(PI/2)   = %.10f\n", m_arccos(RAD_90));

    printf("\n[ARCOTAN]\n");
    printf("arctan(PI/6)   = %.10f\n", m_arctan(RAD_30));
    printf("arctan(PI/4)   = %.10f\n", m_arctan(RAD_45));
    printf("arctan(PI/3)   = %.10f\n", m_arctan(RAD_60));
}
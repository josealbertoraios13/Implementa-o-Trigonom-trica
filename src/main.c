#include <stdio.h>
#include "trig.h"

int main(void){
    printf("\n=== SECANTE ===\n");
    printf("sec(0)      = %.10f\n", m_sec(0));
    printf("sec(PI/6)   = %.10f\n", m_sec(PI / 6));
    printf("sec(PI/4)   = %.10f\n", m_sec(PI / 4));
    printf("sec(PI/3)   = %.10f\n", m_sec(PI / 3));

    printf("\n=== COSSECANTE ===\n");
    printf("csc(PI/6)   = %.10f\n", m_csc(PI / 6));
    printf("csc(PI/4)   = %.10f\n", m_csc(PI / 4));
    printf("csc(PI/3)   = %.10f\n", m_csc(PI / 3));
    printf("csc(PI/2)   = %.10f\n", m_csc(PI / 2));

    printf("\n=== COTANGENTE ===\n");
    printf("cot(PI/6)   = %.10f\n", m_cot(PI / 6));
    printf("cot(PI/4)   = %.10f\n", m_cot(PI / 4));
    printf("cot(PI/3)   = %.10f\n", m_cot(PI / 3));

    printf("\n=== NAN ===\n");
    printf("sec(PI/2) = %f\n", m_sec(PI / 2)); // NAN
    printf("csc(0)    = %f\n", m_csc(0));      // NAN
    printf("cot(0)    = %f\n", m_cot(0));      // NAN
    return 0;
}
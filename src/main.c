/*#include "tests.h"

int main(void){
    rad_and_deg_convertion_test();
    absolute_value_test();
    sqrt_test();
    module_test();

    trigonometric_functions_test1();
    trigonometric_functions_test2();
    trigonometric_functions_test3();
}*/

#include <stdio.h>
#include "trig.h"

int main(void){
    printf("%0.10f \n", m_sinh(2));
    printf("%0.10f \n", m_cosh(2));
    printf("%0.10f \n", m_tanh(2));
    printf("%0.10f \n", m_ln(1));
}
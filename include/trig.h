#ifndef TRIG_H
#define TRIG_H

#define PI 3.14159265358979323846
#define M_e 2.71828182845904523536

#define M_LN2 0.6931471805599453
 
#define DEG_0     0.0
#define DEG_30    30.0
#define DEG_45    45.0
#define DEG_60    60.0
#define DEG_90    90.0
#define DEG_120   120.0
#define DEG_135   135.0
#define DEG_150   150.0
#define DEG_180   180.0
#define DEG_270   270.0
#define DEG_360   360.0

#define RAD_0     0.0
#define RAD_30    (PI / 6.0)
#define RAD_45    (PI / 4.0)
#define RAD_60    (PI / 3.0)
#define RAD_90    (PI / 2.0)
#define RAD_180   PI
#define RAD_270   (3.0 * PI / 2.0)
#define RAD_360   (2.0 * PI)

#define ITERATIONS 50
#define PRECISION 1e-15

#define M_NAN (__builtin_nanf ("") )

double m_rad_to_deg(double x);
double m_deg_to_rad(double x);

double m_abs(double x);

double m_sqrt(double x);

double m_exp(double x);

double m_ln(double x);
double m_ln_series(double m);

double m_mod(double a, double b);

double m_sin(double rad);
double m_cos(double rad);
double m_tan(double rad);

double m_sec(double rad);
double m_csc(double rad);
double m_cot(double rad);

double m_sinh(double x);
double m_cosh(double x);
double m_tanh(double x);

double m_sech(double x);
double m_csch(double x);
double m_coth(double x);

double m_arcsin(double x);
double m_arccos(double x);
double m_arctan(double x);

double m_arcsec(double x);
double m_arccsc(double x);
double m_arccot(double x);

double m_arcsinh(double x);
double m_arccosh(double x);
double m_arctanh(double x);

double m_arcsech(double x);
double m_arccsch(double x);
double m_arccoth(double x);

#endif
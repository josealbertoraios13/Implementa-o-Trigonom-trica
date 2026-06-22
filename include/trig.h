#ifndef TRIG_H
#define TRIG_H

#define PI 3.14159265358979323846
#define MID_ANGLE 180
#define ITERATIONS 50
#define PRECISION 1e-15

#define M_NAN (__builtin_nanf ("") )

double m_rad_to_deg(double x);
double m_deg_to_rad(double x);

double m_abs(double x);

double m_sqrt(double x);

double m_mod(double a, double b);

double m_sin(double rad);
double m_cos(double rad);
double m_tan(double rad);

double m_sec(double rad);
double m_csc(double rad);
double m_cot(double rad);

double m_arcsin(double rad);
double m_arccos(double rad);
double m_arctan(double rad);

#endif
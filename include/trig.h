#ifndef TRIG_H
#define TRIG_H

#define PI 3.14159265358979323846
#define MID_ANGLE 180
#define ITERATIONS 50
#define PRECISION 1e-15

unsigned long long fac(int num);
double module (double a, double b);

double rad_to_deg(double n);
double deg_to_rad(double n);

double m_sin (double rad);
double m_cos (double rad);
double m_tan (double rad);

#endif
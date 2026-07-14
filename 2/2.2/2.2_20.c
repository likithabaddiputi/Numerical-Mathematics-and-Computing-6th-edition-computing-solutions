#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

double my_asin(double x)
{
    double u, a, b;
    double sign = 1.0;
    if (x < 0)
    {
        sign = -1.0;
        x = -x;
    }

    if (x < 1e-8)
    {
        return sign * x;
    }
    if (x >= 0.0 && x <= 0.5)
    {
        u = x;
        a = 0.0;
        b = 1.0;
    }
    else if (x <= 0.5 * sqrt(3.0))
    {
        u = 2.0 * x * x - 1.0;
        a = PI / 4.0;
        b = 0.5;
    }
    else if (x <= 0.5 * sqrt(2.0 + sqrt(3.0)))
    {
        double x2 = x * x;
        u = 8.0 * x2 * x2 - 8.0 * x2 + 1.0;
        a = 3.0 * PI / 8.0;
        b = 0.25;
    }
    else
    {
        u = sqrt(0.5 * (1.0 - x));
        a = PI / 2.0;
        b = -2.0;
    }
    double u2 = u * u;
    double u4 = u2 * u2;
    double u6 = u4 * u2;
    double u8 = u6 * u2;
    double u10 = u8 * u2;
    double u12 = u10 * u2;
    double u14 = u12 * u2;
    double u16 = u14 * u2;
    double u18 = u16 * u2;
    double u20 = u18 * u2;
    double u22 = u20 * u2;
    double p = 1.0
        + (1.0 / 6.0) * u2
        + 0.075 * u4
        + 0.04464286 * u6
        + 0.03038182 * u8
        + 0.022375 * u10
        + 0.01731276 * u12
        + 0.01433124 * u14
        + 0.0093428060 * u16
        + 0.01835667 * u18
        - 0.01186224 * u20
        + 0.03162712 * u22;
    double arcsin_u = u * p;
    double result = a + b * arcsin_u;

    return sign * result;
}

int main()
{
    double test_values[] = {0.0, 1e-9, 0.3, 0.5, 0.6, 0.9, 0.99, 1.0, -0.5, -0.9};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < num_tests; i++)
    {
        double x = test_values[i];
        printf("x = %lf | Custom asin: %.15lf | Standard asin: %.15lf\n",x, my_asin(x), asin(x));
    }

}

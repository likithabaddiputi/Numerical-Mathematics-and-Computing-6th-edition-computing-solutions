#include<stdio.h>
#include <math.h>
#define PI 3.141592653589793
double my_sin(double x)
{
    // Reduce x to the range [-2*PI, 2*PI]
    x = fmod(x, 2.0 * PI);
    if (x > PI)  x -= 2.0 * PI;
    if (x < -PI) x += 2.0 * PI;


    double u;
    double sinu;
    if(x < 1e-8 && x > -1*1e-8)
    {
        return x;
    }
    else if(x>PI/6 || x < -1*PI/6)
    {
        u=x/3;
        double u2 = u * u;
        double u3 = u2 * u;
        double u5 = u3 * u2;
        double u7 = u5 * u2;
        double u4 = u2 * u2;
        double u6 = u4 * u2;
        double numerator = u - (29593.0 / 207636.0) * u3 + (34911.0 / 7613320.0) * u5 - (479249.0 / 11511339840.0) * u7;
        double denominator = 1.0 + (1671.0 / 69212.0) * u2 + (97.0 / 351384.0) * u4 + (2623.0 / 1644477120.0) * u6;
        double sin_u = numerator / denominator;

        double sinx=(3-4*sin_u*sin_u)*sin_u;
        return sinx;

    }
    else if(x<PI/6 && x > -1*PI/6)
    {
        u=x;
        double u2 = u * u;
        double u3 = u2 * u;
        double u5 = u3 * u2;
        double u7 = u5 * u2;
        double u4 = u2 * u2;
        double u6 = u4 * u2;
        double numerator = u - (29593.0 / 207636.0) * u3 + (34911.0 / 7613320.0) * u5 - (479249.0 / 11511339840.0) * u7;
        double denominator = 1.0 + (1671.0 / 69212.0) * u2 + (97.0 / 351384.0) * u4 + (2623.0 / 1644477120.0) * u6;
        double sin_u = numerator / denominator;

        return sin_u;
    }
}

int main()
{
    
    double test_angles[] = {0.0, 1e-9, PI/12, PI/4, 2.5, 5 * PI}; 
    int num_tests = sizeof(test_angles) / sizeof(test_angles[0]);
    
    for(int i = 0; i < num_tests; i++)
    {
        double angle = test_angles[i];
        printf("x = %lf | Custom sin: %.15lf | Standard sin: %.15lf\n", 
               angle, my_sin(angle), sin(angle));
    }
    
    return 0;
}

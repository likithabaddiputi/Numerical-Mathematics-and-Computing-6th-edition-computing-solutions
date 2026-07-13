#include <stdio.h>

#define PI 3.14159265358979323846

double mycos(double x) {
    //Range Reduction
    while (x > 2.0 * PI) x -= 2.0 * PI;
    while (x < -2.0 * PI) x += 2.0 * PI;

    //Pade Approximation to avoid using in built modules
    double x2 = x * x;
    double numerator = 1080.0 - (480.0 * x2) + (17.0 * x2 * x2);
    double denominator = 1080.0 + (60.0 * x2) + (2.0 * x2 * x2);
    
    return numerator/denominator;
}

int main()
{
    double y;
    for (int step = 0; step <= 100; step++)
    {
        double i = step / 100.0;
        y = mycos(i * 10000.0);
        printf("%lf\n", y);
    }
    return 0;
}

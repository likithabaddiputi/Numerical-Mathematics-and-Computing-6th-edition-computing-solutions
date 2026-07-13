#include <stdio.h>

int main()
{
    double g;
    double x = 10;  
    for (int i = 0; i < 20; i++)
    {
        double x2 = x * x;         
        g = (3.5 - 1.28477 * x2) / (1 + 0.154403 * x2);
        printf("x=%lf  g=%lf\n", x, g);
        x = x / 10;                 
    }
    return 0;
}

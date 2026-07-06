#include <stdio.h>
#include <math.h>

int main()
{
    int n = 20000;
    double width = 1.0 / n;
    
    // 1. The height of the circle at x = 0 is 1.0
    double a = 1.0; 
    double b = 0;
    double A = 0;
    
    // 2. Loop exactly n times (stops at i = n, so i * width doesn't exceed 1.0)
    for (int i = 1; i <= n; i++)
    {   
        double x = i * width;
       
        b = sqrt(1.0 - (x * x));
        A += ((a + b) / 2.0) * width;
        a = b;
    }
    
    printf("The Value Of Pi is %lf\n", 4 * A);
    return 0;
}

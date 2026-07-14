#include <stdio.h>

int main()
{
    printf("--- TAYLOR SERIES APPROXIMATION ---\n");
    double y = 1.0;
    for(int i = 0; i < 16; i++)
    {
        double y2 = y * y;
        double y3 = y2 * y;
        
        // Taylor approximation: sin(y) ≈ y - y^3/6 + y^5/120
        double taylor_sin = y - (y3 / 6.0) + (y3 * y2 / 120.0);
        double z = (y - taylor_sin) / y3;
        
        printf("y = %e -> Output: %.15lf\n", y, z);
        y = y / 10.0;
    }
    
    printf("\n--- PADÉ APPROXIMATION ---\n");
    double x = 1.0;
    for(int i = 0; i < 16; i++)
    {
        double x2 = x * x;

        // Padé approximation: (x-sin(x))/x^3 ≈ (420-11x^2)/(2520+60x^2)
        double py = (420.0 - 11.0 * x2) / (2520.0 + 60.0 * x2);
        
        printf("x = %e -> Output: %.15lf\n", x, py);
        x = x / 10.0;
    }
    
    return 0;
}

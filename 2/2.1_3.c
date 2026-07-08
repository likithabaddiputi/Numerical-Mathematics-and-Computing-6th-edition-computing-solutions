#include <stdio.h>
#include <math.h>

int main()
{
    float sp       = sqrtf(2.0);     
    double dp      = sqrt(2.0);       
    long double ep = sqrtl(2.0);
    printf("True sqrt(2): 1.414213562373095048801688724209698078...\n\n");
    printf("Float (32-bit):       %.36f\n", sp);
    printf("Double (64-bit):      %.36lf\n", dp);
    printf("Extended (128-bit):   %.36Lf\n", ep);
    return 0;
}

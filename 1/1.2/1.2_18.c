#include<stdio.h>
#include<math.h>
int main()
{
    float a = 1, b = 0.5*(1-sqrt(5)), c, a1 = 0.5*(1-sqrt(5));
    printf("Recurrence,   Formula\n");
    printf("%f,\t %f\n",a,1.0);
    printf("%f,\t %f\n",b,a1);
    for(int i = 3; i<= 50; ++i)
    {
        c = a + b;
        a = b;
        b = c;
        a1 *= 0.5*(1-sqrt(5));
        printf("%f,\t %f\n",c, a1);
    }
}

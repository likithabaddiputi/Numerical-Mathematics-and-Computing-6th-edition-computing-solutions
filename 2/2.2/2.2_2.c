#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    double c;
    double real=0;
    double det=0;
    printf("Enter Coeffectients ax^2+bx+c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    double d=(b*b)-4*a*c;
    if(d<0)
    {
        printf("Negative Roots\n");
        real=(-b)/(2*a);
        det=sqrt(-d)/(2*a);
        printf("Roots Are \nR1: %lf+%lfi\n",real,det);
        printf("R2: %lf-%lfi",real,det);
    }
    else
    {
        printf("Real Roots\n");
        real=(-b)/(2*a);
        det=sqrt(-d)/(2*a);
        printf("Roots Are \nR1: %lf",real+det);
        printf("\nR2: %lf",real-det);
    }
}

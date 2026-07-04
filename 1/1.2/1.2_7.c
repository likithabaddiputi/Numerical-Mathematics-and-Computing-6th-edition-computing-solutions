#include<stdio.h>
#include<math.h>
void f(double x, double y)
{
    double res = exp(y*log(x));
    printf("Full precision: %f^%f = %.16e\n",x,y,res);
    printf("Single precision: %.1f^%.1f = %.1f\n",x,y,res);
    printf("Double precision: %.2f^%.2f = %.2f\n\n",x,y,res);
}
int main()
{
    f(32,2.5);
    f(81,1.25);
}

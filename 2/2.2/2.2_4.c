#include<stdio.h>
#include<math.h>
int main(){
    double x;
    printf("Enter x value:");
    scanf("%lf",&x);
    double fx;
    if(fabs(x)<0.1)
        fx=3.0*x-1.5*x*x+1.5*x*x*x-0.625*x*x*x*x;
    else
        fx=exp(x)-exp(-2.0*x);
    printf("f(x)=%lf",fx);
    return 0;
}

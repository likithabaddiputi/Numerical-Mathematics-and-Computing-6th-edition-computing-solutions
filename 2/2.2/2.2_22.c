#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    int n;
    printf("Enter x: ");
    scanf("%lf",&x);
    printf("Enter n: ");
    scanf("%d",&n);
    double limit=pow(2,-(double)n);
    double a=pow(2,-(double)n/2.0);
    double b=x/(1+sqrt(1+x*x));
    double c=1;
    double d=1;
    while((1-a)>limit)
    {
        c=(2*c)/(1+a);
        d=(2*a*b)/(1+b*b);
        d=d/(1+sqrt(1-d*d));
        d=(b+d)/(1-b*d);
        b=d/(1+sqrt(1+d*d));
        a=(2*sqrt(a))/(1+a);
        double f=c*log((1+b)/(1-b));        
        printf("f: %lf\n",f);
    }
    double calculated=c*log((1+b)/(1-b));
    double actual=atan(x);
    printf("Calculated: %lf\n",calculated);
    printf("Actual: %lf\n",actual);
    printf("Difference: %e\n",fabs(calculated-actual));
    return 0;
}

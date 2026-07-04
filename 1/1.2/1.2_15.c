#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14159265358979323846
int main()
{
    double a,b,t,x;
    a = sqrt(2);
    b = 0;
    x = 2 + sqrt(2);
    for(int k=1;k<=5;++k)
    {
        t = sqrt(a);
        b = t*(1.0+b)/(a+b);
        a = 0.5 *(t+1.0/t);
        x = x*b*(1.0+a)/(1.0+b);
        printf("%d %.15f %.16e ",k,x,fabs(x-PI));
        if(fabs(x-PI)<= pow(10, -2*k))
            printf("\nVerified: |x-PI| <= 10^-2*%d\n",k);
    }
}

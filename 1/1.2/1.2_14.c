#include<stdio.h>
#include<math.h>
int main()
{
    int k;
    double a=0.0,b=1.0,c=1.0/sqrt(2.0),d=0.25,e=1.0;
    double pi=3.141592653589793,pi_atan=4.0*atan(1.0);
    for(k=1;k<=5;k++)
    {
        a=b;
        b=(b+c)/2.0;
        c=sqrt(a*c);
        d=d-e*pow(b-a,2.0);
        e=2.0*e;
        double f=pow(b,2.0)/d;
        double g=pow(b+c,2.0)/(4.0*d);
        printf("k=%d\nf=%lf\nf_err=%lf\ng=%lf\ng_err=%lf",k,f,fabs(f-pi),g,fabs(g-pi));
        printf("\narctan:f_err=%lf\ng_err=%lf\n",fabs(f-pi_atan),fabs(g-pi_atan));
    }

    return 0;
}

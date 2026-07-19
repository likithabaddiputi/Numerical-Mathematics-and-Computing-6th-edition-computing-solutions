#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double sin_theta=1.0;
    double pi_atan=4*atan(1);
    for(i=3;i<=20;i++)
    {
        double x=sin_theta;
        sin_theta=x/sqrt(2*(1+sqrt(1-x*x)));
        double cos_theta=sqrt(1-sin_theta*sin_theta);
        double pn=pow(2,n-1)*sin_theta*cos_theta;
        printf("Difference: %e\n",fabs(pn-pi_atan));
    }
    return 0;
}

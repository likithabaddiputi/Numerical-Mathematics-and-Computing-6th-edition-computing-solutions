#include<stdio.h>
#include<math.h>
int main()
{
    double sin_theta=1;
    double pi_atan=4*atan(1);
    for(int i=3;i<=20;i++)
    {
        sin_theta=sin_theta/sqrt(2*(1+sqrt(1-sin_theta*sin_theta)));
        double pn=pow(2,i-1)*sin_theta;
        printf("Difference: %e\n",fabs(pn-pi_atan));
    }
    return 0;
}

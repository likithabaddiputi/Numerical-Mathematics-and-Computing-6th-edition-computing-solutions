#include<stdio.h>
#include<math.h>
int main()
{
    int n = 20;
    double pi = 4.0*atan(1.0);
    double p[n+1],sin_theta[n+1];
    for(int i=0;i<=n;++i)
    {
        p[i]=0.0;
        sin_theta[i]=0.0;
    }
    sin_theta[2] = 1.0;
    for(int i = 3;i<=n;++i)
    {
        sin_theta[i] = sin_theta[i-1]/(sqrt(2*(1+sqrt(1-sin_theta[i-1]*sin_theta[i-1]))));
        p[i] = pow(2,i-1)*sin_theta[i];
    }
    printf("True Pi value: %.15f\n", pi);
    printf("Approximated p[20]: %.15f\n", p[20]);
}

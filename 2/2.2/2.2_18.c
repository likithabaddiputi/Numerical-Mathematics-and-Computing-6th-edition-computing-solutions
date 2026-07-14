#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
double fn(double x)
{
    if(x==1.0)
        return 0.0;
    double r = x;
    int n =0;
    if(x<0.5)
    {
        while(r<0.5)
        {
            r*=2.0;
            n = n-1;
        }
    }
    if(x>1.0)
    {
        while(r>=1.0)
        {
            r/=2.0;
            n = n+1;
        }
    }
    double d = sqrt(2.0)/2.0;
    double u = (r - d)/(r +  d);
    double u2 = u*u, u4 = u2*u2, u6 = u2*u4;
    double num = 20790.0 - 21545.27*u2 + 4223.9187*u4;
    double den = 10395 - 14237.635*u2+4778.8377*u4 - 230.41913*u6;
    double lndiv = u*(num/den);
    double lnx = (n-0.5)*log(2) + lndiv;
    return lnx;
}
int main()
{
    printf("%lf\n",fn(1.0));
    printf("%lf\n",fn(2.718281828));
    printf("%lf\n",fn(10.0));
}

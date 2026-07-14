#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
double fn(double x)
{
    if(x>=0.0 && x<= 1.7*pow(10,-9))
        return x;
    else if(x> 1.7*pow(10,-9) && x<= 2*0.01)
    {
        double x2 = x*x;
        double pol = x - x2*x/3.0 + x2*x2*x/5.0 - x2*x2*x2*x/7.0;
        return pol;
    }
    double y,a,b,c,d;
    if (x>2*0.01 && x<= 1.0)
    {
        y = x;
        a=0;
        b=1;
    }
    else
    {
        y = 1.0/x;
        a = pi/2.0;
        b = -1;
    }
    double sp = sqrt(2.0) - 1.0;
    if(y>=0.0 && y<= sp)
    {
        c = pi/16.0;
        d = tan(c);
    }
    else
    {
        c = 3.0*pi/16.0;
        d = tan(c);
    }
    double u = (y - d)/(1 + d*y);
    double u2 =u*u;
    double u4 = u2*u2,u6 = u2*u4;
    double num = 135135 + 171962.46*u2 + 52490.4832*u4 + 2218.1*u6;
    double den = 135135 + 217007.46*u2 + 97799.3033*u4 + 10721.3745*u6;
    double arctanu = u*(num/den);
    double res = a+b*(c+arctanu);
    return res;
}
int main()
{
    printf("%lf\t%lf\t%lf\n",1.0,fn(1.0),atan(1.0));
    printf("%lf\t%lf\t%lf\n",1.0,fn(0.005),atan(0.005));
    printf("%lf\t%lf\t%lf\n",1.0,fn(2.5),atan(2.5));
    printf("%lf\t%lf\t%lf\n",1.0,fn(1000.0),atan(1000.0));
}

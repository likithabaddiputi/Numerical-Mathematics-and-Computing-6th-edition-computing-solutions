#include<stdio.h>
#include<math.h>
#define ln2 log(2.0)
double fn(double x)
{
    int m = (int)(x/ln2);
    double u = x- m*ln2;
    double u2 = u*u, u4 =u*u*u*u;
    double s = 2 + u2*((2520.0+28*u2)/(15120.0+420*u2+u4));
    double eu = (s+u)/(s-u);
    return pow(2,m)*eu;
}
int main()
{
    double test[] = {0,1,-1,0.5,-0.123,-25.5,-1776,3.14159};
    int len = sizeof(test)/sizeof(test[0]);
    for(int i=0;i<len;++i)
    {
        printf("\t%lf\t\t%lf\t\t%lf\n",test[i],fn(test[i]),exp(test[i]));
    }
}

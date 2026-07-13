#include<stdio.h>
#include<math.h>
#define ln2 log(2.0)
double fn(double x)
{
    int m = x/ln2;
    double u = x- m*ln2;
    double u2 = u*u, u4 =u*u*u*u;
    double s = 2 + u2*((2520.0+28*u2)/(15120.0+420*u2+u4));
    double eu = (s+u)/(s-u);
    return pow(2,m)*eu;
}
int main()
{
    fn();
}

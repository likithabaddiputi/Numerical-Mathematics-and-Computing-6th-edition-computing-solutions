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
    double y =x, a=0,b=1.0,c,d;
    double 
}
int main()
{
    
}

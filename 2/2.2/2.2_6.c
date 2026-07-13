#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14159265358979311599796346854
long double fun(long double x)
{
    if(fabsl(x) <= pi/4.0)
        return sinl(x) - 2.0*sinl(x/2.0)*sinl(x/2.0);
    return sinl(x)+cosl(x)-1;
}
int main()
{
    printf("%.16Le\n",fun(0.0001));
    printf("%.16Le\n",fun(0.788));
}

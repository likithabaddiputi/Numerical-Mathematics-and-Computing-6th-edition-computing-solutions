#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i, n=10;
    double x,s,t;
    if (scanf("%lf", &x) != 1) return 1;//if user enters a large number, exit the program
    t = x*x;
    if(fabs(x)>=1.9)
        s = x - sin(x);
    else
    {
        int k = 20;
        s = 1.0;
        for(i = n; i>= 2; i--)
        {
            s = 1.0 - s*(t/(k*(k+1)));
            k -= 2;
        }
        s = s*(x*t)/(k*(k+1));
    }
    printf("%.15lf",s);
}

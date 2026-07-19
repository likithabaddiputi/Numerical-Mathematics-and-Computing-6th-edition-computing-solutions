#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    printf("x:");
    scanf("%lf",&x);
    printf("y:");
    scanf("%lf",&y);
    double abs_x=fabs(x);
    double abs_y=fabs(y);
    double v,w;
    if(abs_x>abs_y)
    {
        v=abs_x;
        w=abs_y;
    }
    else
    {
        v=abs_y;
        w=abs_x;
    }
    double a=sqrt(x*x+y*y);
    double b=0,c=0;
    if(v>0)
    {
        b=v*sqrt(1.0+(w/v)*(w/v));
        c=2*v*sqrt(0.25+pow(w/(2*v),2));
    }
    printf("a: %e\n",a);
    printf("b: %e\n",b);
    printf("c: %e",c);
    return 0;
}

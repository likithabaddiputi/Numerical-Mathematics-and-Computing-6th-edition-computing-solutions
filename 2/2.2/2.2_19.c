#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793238
int main()
{
    double x,tan_x=0,u;
    printf("x: ");
    scanf("%lf",&x);
    while(x>(PI/2.0))
    {
        x-=PI;
    }
    while(x<(-PI/2.0))
    {
        x+=PI;
    }
    double abs_x=fabs(x);
    if(abs_x<=1.7e-9)
        tan_x=x;
    int flag=0;
    if(abs_x>(PI/4.0))
    {
        u=(PI/2.0)-x;
        flag=1;
    }
    else
        u=x;
    double numerator=135135.0-17336.106*pow(u,2)+379.23564*pow(u,4)-1.0118625*pow(u,6);
    double deno=135135.0-62381.106*pow(u,2)+3154.9377*pow(u,4)+28.17694*pow(u,6);
    double approx=u*(numerator/deno);
    if(flag)
        tan_x=1.0/approx;
    else
        tan_x=approx;
    printf("%lf",tan_x);
    return 0;
}

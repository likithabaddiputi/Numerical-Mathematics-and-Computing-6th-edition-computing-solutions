#include<stdio.h>
#include<math.h>
int main()
{
    int n = 20;
    double pi = 4.0*atan(1.0);
    double x = -1;
    double y = 0;
    double sum = 0;
    double delx = 2.0/n;
    double y1 = 0;
    for(int i=1;i<=n;++i)
    {
        y1 = sqrt(1-(x+i*delx)*(x+i*delx));
        double area = (y+y1)*0.5*delx;
        sum+=area;
        y = y1;
    }
    printf("Area of all trapezoids: %.15f\n",sum*2);
    printf("Value of pi: %.15f",pi);
}

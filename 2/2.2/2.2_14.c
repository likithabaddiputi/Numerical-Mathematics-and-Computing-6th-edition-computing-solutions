#include<stdio.h>
int main()
{
    double x = (-10.0);
    double x2;
    double z;
    while(x<=10.0)
    {
        //using pades approximation of z=(e^x-1)/2x=(60+6x+x2)/(120-48x+6x2)
        x2=x*x;
        z=((60+6*x+x2)/(120-48*x+6*x2));
        printf("Value Of Z at x = %lf is %.15lf\n",x,z);
        x+=0.01;
    }
}

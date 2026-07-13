#include<stdio.h>
#include<math.h>
int main()
{
    int n=50;
    double a1=1.0;
    double a2=0.5*(1.0+sqrt(5.0));
    double an=0.0;
    printf("n=1: %.15lf, %.15lf\n",a1,pow(0.5*(1.0+sqrt(5.0)),0));
    printf("n=2: %.15lf, %.15lf\n",a2,pow(0.5*(1.0+sqrt(5.0)),1));
    for(int i=3;i<=n;i++)
    {
        an=a1+a2;
        double a_c=pow(0.5*(1.0+sqrt(5.0)),i-1);
        printf("n=%d: %.15lf, %.15lf\n",i,an,a_c);
        a1=a2;
        a2=an;
    }
    return 0;
}

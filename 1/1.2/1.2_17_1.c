#include<stdio.h>
#include<math.h>
int main()
{
    int n=50;
    float a1=1.0;
    float a2=0.5*(1.0+sqrtf(5.0));
    float an=0.0;
    printf("n=1: %.7f, %.7f\n",a1,powf(0.5*(1.0+sqrtf(5.0)),0));
    printf("n=2: %.7f, %.7f\n",a2,powf(0.5*(1.0+sqrtf(5.0)),1));
    for(int i=3;i<=n;i++)
    {
        an=a1+a2;
        float a_c=powf(0.5*(1.0+sqrtf(5.0)),i-1);
        printf("n=%d: %.7f, %.7f\n",i,an,a_c);
        a1=a2;
        a2=an;
    }
    return 0;
}

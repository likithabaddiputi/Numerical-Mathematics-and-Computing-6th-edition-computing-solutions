#include<stdio.h>
int main()
{
    int n=100;
    double x=1.0;
    for(int i=1;i<=n;i++)
    {
        x=(x*100.0)/i;
        printf("%d: %lf\n",i,x);
    }
    return 0;
}

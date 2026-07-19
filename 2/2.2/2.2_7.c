#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,f=0;
    printf("x: ");
    scanf("%lf",&x);
    printf("y: ");
    scanf("%lf",&y);
    double ln=log(x);
    double u=y+1.0;
    if(fabs(u)<1e-4)
        f=ln+(u*ln*ln)/2.0+(u*u*ln*ln*ln)/6.0;
    else
        f=(pow(x,u)-1.0)/u;
    printf("f(x,y)= %lf",f);
    return 0;
}

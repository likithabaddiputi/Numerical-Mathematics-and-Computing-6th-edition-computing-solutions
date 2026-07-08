#include <stdio.h>
#include <math.h>

int main()
{
    double y=0;
    for(int i = 1;i <5000;i++)
    {
        y+=(1.0/i);
        
    }
    y-=log(5000.5);
    printf("%lf",y);
}

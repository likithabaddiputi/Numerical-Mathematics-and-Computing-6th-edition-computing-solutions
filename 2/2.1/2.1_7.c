#include <stdio.h>
#include <math.h>
int main() 
{
    double sum=0.0;
    int n=5000;
    double gamma=0;
    for(int i=1;i<=n;i++) 
    {
        sum +=1.0/i;
        gamma=sum-log(i);
        
    }
    printf("%lf",gamma);
    return 0;
}

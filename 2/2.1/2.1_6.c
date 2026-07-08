#include<stdio.h>
#include<math.h>
int nDigit(int n, double x)
{
    if(x==0.0)
        return -1;
    if(x>=10)
        return nDigit(n,x/10.0);
    if(x<1)
        return nDigit(n,x*10.0);
    int count = 1; 
    while (count < n)
    {
        if (x == (int)x) 
        {
            return -1;
        }
        x *= 10.0;  
        int currentDigit = (int)x % 10;
        if (currentDigit != 0)
        {
            count++;           
        }
    }
    return ((int)x % 10);
}
int main()
{
    double x;
    int n;
    scanf("%lf",&x);
    scanf("%d",&n);
    int res = nDigit(n,x);
    if(res==-1)
        printf("The number does not contain a %dth non-zero digit.",n);
    else
        printf("%dth non-zero digit is %d",n,res);
}

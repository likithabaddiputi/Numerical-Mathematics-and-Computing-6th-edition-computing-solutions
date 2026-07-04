#include<stdio.h>
//a
long fact(int n)
{
    long prod = 1;
    for(int i = n; i>=1;--i)
        prod *= i;
    return prod;
}
float ibin(int n,int m)
{
    if (m < 0 || m > n || n < 0) 
        return 0; 
    if(m==0 || m==n)
        return 1;
    
    return fact(n) / (fact(m) * fact(n - m));
}
int main()
{
    printf("%.2f\n",ibin(4,2));
}

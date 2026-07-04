#include<stdio.h>
//a
long fact(int n)
{
    long prod = 1;
    for(int i = n; i>=1;--i)
        prod *= i;
    return prod;
}
int ibin(int n,int m)
{
    if (m < 0 || m > n || n < 0) 
        return 0; 
    if(m==0 || m==n)
        return 1;
    
    return fact(n) / (fact(m) * fact(n - m));
}
int jbin(int n, int m)
{
    float prod =1;
    int min = n-m;
    if(min>=m)
        min = m;
    for(int i =1; i<=min; ++i)
        prod *= (n-i+1)/(double)i;
    return prod;
}
int kbin(int n, int m)
{
    int a[n+1][n+1];
    for(int i = 0;i<=n;++i)
    {    a[i][0] = 1;
         a[i][i] = 1;
    }
    for(int i = 2; i<=n;++i)
        for(int j = 1;j<=i-1;++j)
            a[i][j] = a[i-1][j-1] + a[i-1][j];    
    
    return a[n][m];
}
int main()
{
    if(ibin(4,2)==jbin(4,2))
        printf("The part given in the b can be used ");
    else
        printf("No");
    printf("\n%d",ibin(4,2));
    printf("\n%d",jbin(4,2));
    printf("\n%d",kbin(4,2));
}

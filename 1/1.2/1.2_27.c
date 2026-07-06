#include<stdio.h>
#include<math.h>
long int fact(int n)
{
    long int prod = 1;
    for(int i=n;i>=1;--i)
        prod *= i;
    return prod;
}
void fn(double x)
{
    long double sum = 1;
    long num = 1.0;
    for(int n = 1; n<=8;++n)
    {
        if(n==1)
            num = 1.0;
        else{
            num *= (2*n-3);
        }
        long double sign = (n % 2 == 0) ? -1.0 : 1.0;
        long double term = (sign*num*pow(x,n))/((double)pow(2,n)*fact(n));
        sum+=term;
    }
    printf("%.40Lf\n",sum);
}
int main()
{
    fn(0.00001);
    fn(-0.00001);
}
/*
No, the answers are inaccurate at the end. The digits match the true mathematical expansion of the Taylor series up to roughly the 15th to 17th decimal place. Beyond that point, the digits shown in the book are merely artifacts of standard floating-point precision limitations, proven by the impossible trailing zeros for an irrational number.
*/

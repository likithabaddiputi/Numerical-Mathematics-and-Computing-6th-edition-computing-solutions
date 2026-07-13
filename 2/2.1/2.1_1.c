#include<stdio.h>
void fractional_number(double x);
int main()
{
    int a=12;
    int b=256;
    double c= 3.14;
    double d=167.3278;
    double ex=0.1;
    printf("Decimal form:\n%d %d %lf %lf %lf",a,b,c,d,ex);
    printf("\nOctal form:");
    printf("\n%o %o ",a,b);
    fractional_number(c);
    printf(" ");
    fractional_number(d);
    printf(" ");
    fractional_number(ex);
}
void fractional_number(double x)
{
    double frac=x-(long)x;
    int integer[100],i=0, precision=15,digit=0;
    long n=(long)x;
    while(n!=0)
    {
        integer[i]=n%8;
        n/=8;
        i++;
    }
    for(int j=i-1; j>=0;j--)
    {
        printf("%d",integer[j]);
    }
    printf(".");
    while(frac>0 && precision>0)
    {
        frac*=8;
        digit=(long)frac;
        printf("%d",digit);
        frac=frac-digit;
        precision--;
    }
}

#include<stdio.h>
#include<math.h>
void fn(double a,int n)
{
    double b;
    double a_true =a;
    for(int i = 2; i<=n; ++i)
    {
        b = i*a;
        a = b/i;
        if(i%100 == 0)
            printf("a_%d = %.25e, error = %.25e\n", i,a,fabs(a_true - a));
    }
    printf("\n");
}
int main()
{
    const int n = 1000;
    printf("Values when a = 1.875\n");
    fn(1.875,n);
    printf("\nValues when a = 0.5\n");
    fn(0.5,n);
    printf("You can see here that when we give 1.756, it deviates from a_1, due to floating-point-round-off error(studied in chapter 2)\n");
    printf("\nSome values of a1 deviates from theoretical value, 10^20, 10^-12, 10^-8, 10^-4\n");
    fn(pow(10,20),n);
    fn(pow(10,50),n);
    fn(pow(10,-80),n);
    fn(pow(10,-40),n);
    
    /* by substituting b_n in a_n expression, we get a_n = a_n-1. i.e, a_n = a1 */
    //deviation of a_n from a_1 occurs when denominator of a_1 is not a power of 2
}

#include<stdio.h>
#include<math.h>
int main()
{
    double inner_d=6.0*40320.0*40320.0*40320.0+744.0;
    double pi_double=log(inner_d)/sqrt(163.0);
    printf("Double: %lf\n",pi_double);
    long double inner_ld=6.0L*40320.0L*40320.0L*40320.0L+744.0L;
    long double pi_ld=logl(inner_ld)/sqrtl(163.0L);
    printf("Extended: %.15Lf",pi_ld);
    return 0;
}

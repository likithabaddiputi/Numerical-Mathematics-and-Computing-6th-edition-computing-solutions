#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("x: ");
    scanf("%lf",&x);
    double sum=1;
    double term=1;
    int n=1;
    while(n<=25)
    {
        term=term*(x/(double)n); 
        sum+=term;
        if(fabs(term)<1.0e-6)
            break;
        n++;
    }
    double exact=exp(x);
    double abs_error=fabs(sum-exact);
    double rel_error=abs_error/fabs(exact);
    printf("Absolute Error: %e\nRelative Error: %e",abs_error,rel_error);
    return 0;
}

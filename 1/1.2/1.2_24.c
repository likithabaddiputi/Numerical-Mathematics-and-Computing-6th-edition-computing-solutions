#include<stdio.h>
#include<math.h>
void ln1(double x)
{
    double true_ln = log(1+x);
    printf("ln(1+ %f) = %f",x,true_ln);
    double sum =0;
    printf("\nk  True\t  approximated  error");
    for(int k = 1; k<=8; ++k)
    {
        sum += pow(-1,k-1)*pow(x,k)/(double)k;
        printf("\n%d %f\t%f\t%f",k,true_ln,sum,fabs(true_ln-sum));
    }
}
void ln2(double x)
{
    double true_ln = log((1+x)/(1-x));
    printf("\n\nln((1+ %f)/(1- %f)) = %f",x,x,true_ln);
    double sum =0;
    printf("\nk  True\t  approximated  error");
    for(int k = 1; k<=10; k+=2)
    {
        sum += 2*pow(x,k)/(double)k;
        printf("\n%d %f\t%f\t%f",k,true_ln,sum,fabs(true_ln-sum));
    }
}
int main()
{
    ln1(1);
    ln2(1.0/3);
}

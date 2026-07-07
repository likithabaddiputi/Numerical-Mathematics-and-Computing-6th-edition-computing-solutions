#include<stdio.h>
#include<math.h>
long double mypow(long double x, long n)
{
    return expl(n*logl(x));
}
int main()
{
    long double e_true = exp(1.0),e, diff;
    long int n = 1;
    printf("k    e_true         e_calculated        error\n");
    for(int k = 1; k<=10;++k)
    {
        n *=8;
        e = mypow(1.0+(1.0/n) , n);
        diff = e_true - e;
        if(e_true<e)
            diff *= -1;
        printf("%d %.15Lf %.15Lf %.15Lf\n",k,e_true,e,diff);
    }
}
/*
As we increase n further, the 1.0/n term becomes 0, and and hence gives the value of e to be 1.
*/

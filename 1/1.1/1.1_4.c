#include<stdio.h>
#include<math.h>
int main()
{
    double e_true = exp(1.0),e, diff;
    long int n = 1;
    printf("k    e_true         e_calculated        error\n");
    for(int k = 1; k<=10;++k)
    {
        n *=8;
        e = pow(1.0+(1.0/n) , n);
        diff = fabs(e_true - e);
        printf("%d %.15lf %.15lf %.15lf\n",k,e_true,e,diff);
    }
}
/*
As we increase n further, the 1.0/n term becomes 0, and and hence gives the value of e to be 1.
*/

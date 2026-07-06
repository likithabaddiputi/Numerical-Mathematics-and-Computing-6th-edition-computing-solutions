#include<stdio.h>
#include<math.h>
double theta_n(int n)
{   
    return(2*M_PI/pow(2,n));
}

double p_n(int n)
{
    return(pow(2,n-1)*sin(theta_n(n)));
}
int main()
{
    // Sequences
    for(int i=3;i<21;i++)
    {
        printf("%lf %lf %lf\n",sin(theta_n(i)),p_n(i),4.0*atan(1));
    }
    for(int j=3;j<10;j++)
    {
        double a=sin(theta_n(j-1))/pow(2*(1+pow((1-pow(sin(theta_n(j-1)),2)),0.5)),0.5);
        printf("%lf %lf\n",sin(theta_n(j)),a);
    }

}

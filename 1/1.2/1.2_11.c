#include<stdio.h>
#include<math.h>
double theta_n(int n)
{   
    return(M_PI/pow(2,n-1));
}
double s_n(int n)
{
    return(pow(sin(theta_n(n)),2));
}
double p_n(int n)
{
    return(pow(2,n)*pow(s_n(n+1),0.5));
}
int main()
{
    // proving s(n+1)=s(n)/(2+2*root(1-s(n)));
    for(int i=2;i<10;i++)
    {
        double x=s_n(i)/(2+2*pow(1-s_n(i),0.5));
        printf("%lf %lf\n",s_n(i+1),x);
    }

    //Approximation to pi
    for(int j=0;j<20;j++)
    {
        printf("Value Of P(n) when number of sides=%lf is %lf\n",pow(2,j+1),p_n(j+1));
    }

    
    double si=1;
    double pi=2;

    for(int k=2;k<21;k++)
    {
        double sf=si/(2+2*pow(1-si,0.5));
        printf("%lf %lf\n ",si,sf);
        printf("%lf",pow(2,k)*pow(sf,0.5));
        si=sf;
    }
}

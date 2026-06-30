#include<stdio.h>

int main()
{
    //taking the function as 1/x
    float x=0.5;float h=1;
    float emax=0;int imax;
    for(int i=0;i<60;i++)
    {
        float result=(1/(x+h)-1/x)/h;
        float true_error=-(1/(x*x));
        float error=(result-true_error);
        if(error<0)
        {
            error=-error;
        }
        
        if(error>emax)
        {
            emax=error;
            imax=i;
            
            
        }
        h=0.25*h;
    printf("%e\n",error);
    }
    printf("Max Error is %e at iteration %d",emax,imax);
}


//hence we observe that as the value of h decreases, the error initially decreases but after a certain point, it starts to increase due to numerical instability and floating-point precision limitations. This demonstrates the trade-off between step size and accuracy in numerical differentiation.

#include<stdio.h>
#include<math.h>
void quadratic(float a,float b,float c);
int main()
{
    quadratic(0.0f,0.0f,1.0f);
    quadratic(0.0f,1.0f,0.0f);
    quadratic(1.0f,0.0f,0.0f);
    quadratic(0.0f,0.0f,0.0f);
    quadratic(1.0f,1.0f,0.0f);
    quadratic(2.0f,10.0f,1.0f);
    quadratic(1.0f,-4.0f,3.99999f);
    quadratic(1.0f,-8.01f,16.004f);
    quadratic(2.0e17f,1.0e18f,1.0e17f);
    quadratic(1.0e-17f,-1.0e17f,1.0e17f);
    return 0;
}
void quadratic(float a,float b,float c)
{
    if(a==0 && b==0)
    {
        if(c==0) 
            printf("Infinite solutions\n");
        else 
            printf("No solution\n");
        return;
    }
    if(a==0)
    {
        float x=-c/b;
        if(x==-0.0f) 
            x=0.0;
        printf("Linear Equation;x= %e\n",x);
        return;
    }
    float x1,x2;
    if(b>=0)
        x1=((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
    else
        x1=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);    
    if(x1!=0)
        x2=c/(a*x1);
    else
        x2=0;
    if(x1==-0.0f) 
        x1=0.0f;
    if(x2==-0.0f) 
        x2=0.0f;
    double x1_d=(double)x1;
    double x2_d=(double)x2;
    printf("x1: %e\n",x1_d);
    printf("x2: %e\n",x2_d);
}

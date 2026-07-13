#include<stdio.h>
int main() 
{
    float eps_float=1.0;
    while((float)(1.0f+eps_float/2.0f)>1.0f)
    {
        eps_float/=2.0f;
    }
    printf("Single Precision Epsilon: %e\n",eps_float);
    double eps_double=1.0;
    while((1.0+eps_double/2.0)>1.0)
    {
        eps_double/=2.0;
    }
    printf("Double Precision Epsilon: %e\n",eps_double);
    return 0;
}

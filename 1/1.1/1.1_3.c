#include<stdio.h>
#include<math.h>
#include<float.h>
int main()
{
    int i,imax=0,n=30;
    float actual_error,round_error,total_error,trunc_error,y,x=0.5,h=1.0f;
    float rounding_limit=FLT_EPSILON;
    for(i=0;i<n;i++)
    {
        h=0.25f*h;
        y=(sinf(x+h)-sinf(x-h))/(2*h);
        actual_error= fabsf(cosf(x)-y);
        trunc_error=-((1.0f/6.0f)*h*h*(-cosf(x)));
        round_error=rounding_limit/h;
        total_error=trunc_error+round_error;
        printf("%f %f %f %f %f\n",log10f(h),-log10f(actual_error),-log10f(round_error),-log10f(trunc_error),-log10f(total_error));
    }
    return 0;
}

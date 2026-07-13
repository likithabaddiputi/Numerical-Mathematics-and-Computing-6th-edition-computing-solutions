#include<stdio.h>
#include<math.h>
int main()
{
    for(double x=0.1;x<=5.0;x+=0.5)
    {
        for(double y=0.1;y<=5.0;y+=0.5)
        {
            double lhs=cos(x-y);
            double rhs=cos(x)*cos(y)+sin(x)*sin(y);
            if(lhs!=rhs)
            {
                printf("x=%f\ny=%f\nlhs=%.17f\nrhs=%.17f\ndiff=%e\n",x,y,lhs,rhs,fabs(lhs-rhs));
            }
        }
    }
    return 0;
}

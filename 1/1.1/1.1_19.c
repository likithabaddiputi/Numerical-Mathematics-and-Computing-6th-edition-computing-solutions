#include <stdio.h>
#include <math.h>

int main() {
// 19a     
    double x,y,z;
    for(int i=0;i<21;i++)
    {
        x=2+1.0/pow(8,i);
        y=atan(x)-atan(2);
        z=pow(8,i)*y;
        printf("%lf %lf %lf\n",x,y,z);
    }


//19b
    double epsi=1.0;
    while(1<1+epsi)
    {
        epsi=(epsi*0.5);
        printf("%lf\n",epsi);
    }

}

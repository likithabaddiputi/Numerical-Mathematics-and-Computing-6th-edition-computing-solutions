#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double x,y;
    x=1;
    for(i=1;i<=24;i++)
    {
        x=x/2.0;
        y=atan(fabs(x))/x;
        printf("%lf %lf\n",x,y);

    }

}
// the given pseudo codes fails to account for the negative of x and this fails to show that the limit fails as x tends to 0

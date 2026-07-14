#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
int main()
{
    double p2,p3;
    for(int n =1;n<=100;++n)
    {
        double p1 =0.0;
        for(int k =1; k<=n;++k)
        {
            p1 += (1.0/k)*tan((pi*k)/(2*n+1));
        }
        p2 = (1.0/(2*n+1)) + (2.0/pi)*p1;
        printf("p%d = %.8lf",n,p2);
        p3 = (4.0/(pi*pi))*log(2*n+1) + 1 - p2;
        if(p3>=0 && p3<=0.0106)
            printf("\tValid\n");
        else
            printf("\tNot valid\n");
    }
}

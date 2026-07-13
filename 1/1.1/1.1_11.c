#include<stdio.h>
#include<math.h>
int main()
{
        float t0,h;
        printf("Enter initial value of h (0.1/0.0078125): ");
        scanf("%f",&h);
        printf("Enter initial value of t: ");
        scanf("%f",&t0);
        float t_add=t0,t_mul=t0;
        double t_double=0, h_double=(double)h;
        int n;
        printf("n value: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            t_add+=h;
            printf("%f ",t_add);
            t_mul=t0+i*h;
            printf(" %f ",t_mul);
            t_double=(double)t0+(i*h_double);
            printf(" %lf\n",t_double);
        }
        printf("\n%f",t_add);
        printf("\n%f",t_mul);
        printf("\n%lf",t_double);
        double abs_err1=fabs(t_double-(double)t_add);
        double abs_err2=fabs(t_double-(double)t_mul);
        printf("\n%lf",abs_err1);
        printf("\n%lf",abs_err2);
    return 0;
}

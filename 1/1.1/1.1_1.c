//1.1.1
#include<stdio.h>
#include<math.h>
int main()
{
    int imax,imin;
    const int n=30;
    double error, y, x=0.5, h=1, emax =0.0, trueval = cos(x), emin = 1e9;
    printf("s.no   h             y              error\n");
    printf("----------------------------------------------------------\n");
    for(int i=1; i<=n; ++i)
    {
        h *= 0.25; //using h*=0.25 gives us roundoff errors
        y = (sin(x+h) - sin(x))/h;
        error = fabs(trueval - y);
        printf("%d    %.2e   %.15lf  %.2e\n", i,h,y,error);
        if(error>emax)
        {
            emax = error;
            imax = i;
        }
        if (error < emin) {
            emin = error;
            imin = i;
        }
    }
    printf("\nMaximum error occurs at h = 4^-%d\n",imax);
    printf("Maximum error is %.15lf: \n",emax);
    printf("Minimum error occurs ar h = 4^-%d\n",imin);
    printf("Minimum error is %.15lf: \n",emin);
}
/*
When running the program, the error follows a distinct U-shaped curve. Initially from steps 1 to 14, the error decreases linearly with h due to the reduction of truncation error. The optimal step size occurs at step 14, yielding the highest precision. Beyond this point, round-off error takes over due to catastrophic cancellation in the numerator. By step 30, h is smaller than machine epsilon, causing sin(x+h) - sin(x) to evaluate to zero. This results in a total loss of precision where the calculated derivative becomes 0, yielding a maximum absolute error of approximately cos(0.5) approx 0.8775
*/

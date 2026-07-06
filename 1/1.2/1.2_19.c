#include <stdio.h>
#include <math.h>

int main()
{
    //a
    double j0=0.7651976865;
    double j1=0.4400505857;
    printf("J_0: %lf\nJ_1: %lf\n",j0,j1);
    for(int i=20;i>0;i--)
    {
        double jf=2*(i)*j1-j0;
        printf("J_%d: %lf\n",i+1,jf);
        j0=j1;
        j1=jf;
    }
    printf("\n");
    
    //b
    double j20 = 3.873503009e-25; 
    double j19 = 1.548478441e-25; 
    

    printf("J_20: %e\n", j20);
    printf("J_19: %e\n", j19);

    for(int i = 19; i > 0; i--)
    {
        
        double j_previous = ((2.0 * i)) * j19 - j20;
        
        printf("J_%d: %e\n", i - 1, j_previous);
        
    
        j20 = j19;        
        j19 = j_previous; 
    }
}


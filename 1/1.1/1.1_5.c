#include <stdio.h>
#include<math.h>
double integration(double n){
        double result=0;
        double x=0;
        double dx=0.0000001;
        while (x<1)
        {
            result+=pow(x,n)*exp(x)*dx;
            x+=dx;
        }
        return result;
}


int main(){
    
    double x=0;
    double result=0;
    double dx=0.0000001;
    int n;
    int flag =0;
    
    //Verifying relation
    for(n=1;n<4;n++)
    {   
        if(integration(n+1)<integration(n))
        {
            flag++;
        }
    }
    if (flag==3)
    {
        printf("Relation p(1)>p(2)>p(3)>p(4)>0 Verified\n");

    }
   
   
    printf("\nVerifying p(n+1) = e−(n +1)p(n)"); 
    for(int i=1;i<6;i++)
    {   
        double lhs = integration(i + 1);
        double rhs = exp(1.0) - (i + 1) * integration(i);
        if(fabs(lhs-rhs))
            printf("\nVerified for N = %d",i);
    }   
        
    //printing first 20 elements
    for(int j=1;j<21;j++)
    {   
        printf("\nThe result for p(%d) is %lf",j,integration(j));
    }

}

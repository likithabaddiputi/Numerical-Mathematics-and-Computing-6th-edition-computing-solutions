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
        printf("Relation Verified");

    }
   
   
    //Verifying p(n+1) = e−(n +1)p(n) 
    for(int i=1;i<6;i++)
    {   
        if(integration(i+1)==exp(1)-(i+1)*integration(i))
        {
            printf("Verified for N = %d",i);
        }
    }   
        
    //printing first 20 elements
    for(int j=1;j<21;j++)
    {   
        printf("The result for p(%d) is %lf\n",j,integration(j));
    }

}



#include <stdio.h>
#include<math.h>

int main()
{
    
    //using logarithm
    double result;
    for(int i =1;i<31;i++)
    {   
        result=0;
        for(int j=1;j<=i;j++)
        {
            result+=log(j);
        }
        printf("Factorial of %d is %lf\n",i,exp(result));
    }
    
    //using  double-precision floating-point
    double resulta;
    for(int i =1;i<31;i++)
    {   
        resulta=1;
        for(int j=1;j<=i;j++)
        {
            resulta*=j;
        }
        printf("Factorial of %d is %lf\n",i,resulta);
    }
    
    //using integer arithmetic
    int resulta;
    for(int i =1;i<31;i++)
    {   
        resulta=1;
        for(int j=1;j<=i;j++)
        {
            resulta*=j;
        }
        printf("Factorial of %d is %d\n",i,resulta);
    }
    
    


}

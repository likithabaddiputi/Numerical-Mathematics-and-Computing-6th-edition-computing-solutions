
#include <stdio.h>
#include<math.h>
void print128(__int128 n) {
    if (n == 0) { printf("0"); return; }
    char str[50];
    int i = 0;
    while (n > 0) {
        str[i++] = (char)(n % 10 + '0');
        n /= 10;
    }
    while (i > 0) {
        putchar(str[--i]);
    }
}

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
    __int128 resultb;
    for(int i =1;i<31;i++)
    {   
        resultb=1;
        for(int j=1;j<=i;j++)
        {
            resultb*=j;
        }
        printf("Factorial of %d is ",i);
        print128(resultb);
        printf("\n");
    }
    
    


}
 

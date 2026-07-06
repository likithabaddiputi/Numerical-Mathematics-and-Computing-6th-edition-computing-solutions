#include<stdio.h>
#include<math.h>
int main()
{
    double x=1;
    double y=1;
    int flag=0;
    
    while(flag==0)
    {
        if(x<10)
        {
        double a=pow(x,y);
        double b=exp(y*log(x));
        if(a==b)
        {
            printf("Value Of Expressions: %lf %lf\n",b,a);

        }
        else
        {
            
            printf("Values Of x,y For which expressions dont match %lf %lf Values Of Expressions: %lf %lf\n",x,y,a,b);
        }
        x+=0.1;
        y+=0.1;
    }
    else
    {
        break;
    }
    }
}

//Although the functions are true mathematically, we observe a mismatch in the values due to the errors propogated through the way the values are truncated and stored

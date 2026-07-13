#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float fn(float x)
{
    return ((-x*x)/(5.0f+sqrtf(25.0f+x*x)));
}
int main()
{
    printf("\t\tx\t\t\t\tvalue\n");
    for(int i = 0; i<=100 ; i++)
    {
        float x = i*0.01f;
        printf("%.7e  %.7e\n",x,fn(x));
    }
}

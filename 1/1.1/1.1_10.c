#include <stdio.h>
#include<math.h>

int main(){
    int flag=0;
    for(int i=0;i<1000;i++)
    {
        if(((1+pow(2,-i))==1))
        {
            printf("%d\n",i);
        }
    }

}
//we observe that for any exponential power over 63,the relation a+x=a holds true because the number of bits are
// limited and beyond a certain value,the value of 2^-n requires more than the maximum amount of bits, hence, the rightmost significant bit is truncated.


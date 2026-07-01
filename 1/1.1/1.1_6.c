#include <stdio.h>
#include<math.h>

int main(){
    
    double p_big=1000;
    int flag=0; 
    for(int i=19;i>0;i--)
    {
        double p_small=(exp(1)-p_big)/(i+1);
        if(p_big<p_small)
        {
            flag++;
        }
        printf("The result for p(%d) is %lf\n",i,p_small);
        p_big=p_small;

    }
    //verifying
    if(flag==19 && p_big==1)
    {
        printf("Verified");
    }

}



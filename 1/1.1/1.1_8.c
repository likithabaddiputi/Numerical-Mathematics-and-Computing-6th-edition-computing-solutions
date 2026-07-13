#include<stdio.h>
#include<math.h>
int main()
{
    double a[] = {100000001.0, 100000002.0, 100000003.0, 100000004.0, 100000005.0, 100000006.0, 100000007.0, 100000008.0, 100000009.0, 100000010.0};
    int n=sizeof(a)/sizeof(a[0]);
    double sum=0,mean,vsum=0,variance,std;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean=sum/n;
    printf("Mean: %lf\n",mean);
    for(int i=0;i<n;i++)
    {
        vsum+=pow(a[i],2);
        printf("%lf ",vsum);
    }
    variance=(vsum-(n*pow(mean,2)))/(n-1);
    std=sqrt(variance);
    printf("\nVariance: %lf",variance);
    printf("\nStandard Deviation: %lf",std);
    return 0;
}

#include<stdio.h>
void swap(float v[], int p[], int n);
int main()
{
    float v1[]={6.3,4.2,9.3, 6.7, 7.8, 2.4, 3.8, 9.7};
    int p1[]={2, 3, 8, 7, 1, 4, 6, 5};
    int n1=sizeof(p1)/sizeof(p1[0]);
    swap(v1,p1,n1);
    printf("1:\n");
    for(int i=0;i<n1;i++) 
        printf("%f ",v1[i]);
    float v2[]={0.7,0.6,0.1,0.3,0.2,0.5,0.4};
    int p2[]={3, 5, 4, 7, 6, 2, 1};
    int n2=sizeof(p2)/sizeof(p2[0]);
    swap(v2,p2,n2);
    printf("\n2:\n");
    for(int i=0;i<n2;i++) 
        printf("%f ",v2[i]);
    return 0;
}
void swap(float v[], int p[], int n)
{
    for (int i=0;i<n;i++)
    {
        if (p[i]<0) 
            continue;
        int j=i;
        float temp=v[i];
        while(1)
        {
            int k=p[j]-1;       
            p[j]= -p[j];      
            if (k==i)
            { 
                v[j]=temp; 
                break;
            }
            v[j]=v[k];
            j=k;
        }
    }
    for (int i=0;i<n;i++) 
        p[i]= -p[i];
}

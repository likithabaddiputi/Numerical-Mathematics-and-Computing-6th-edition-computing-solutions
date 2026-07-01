#include<stdio.h>
int main()
{
    char* p1[] = {"Cheb","Ceb","Tscheb","Tcheb"};
    char* p2[] = {"y","i"};
    char* p3[] ={"shev","schef","cev","cheff","scheff"};
    
    int len1 = sizeof(p1)/sizeof(p1[0]);
    int len2 = sizeof(p2)/sizeof(p2[0]);
    int len3 = sizeof(p3)/sizeof(p3[0]);
    
    int count =0;
    for(int i=0;i<len1;++i)
        for(int j =0;j<len2;++j)
            for(int k =0;k<len3;++k)
            {
                count++;
                printf("%d. %s%s%s\n",count,p1[i],p2[j],p3[k]);
                
            }
}

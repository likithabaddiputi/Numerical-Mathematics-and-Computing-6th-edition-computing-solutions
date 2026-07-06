#include <stdio.h>
#include <math.h>

int main()
{
    //recurrence integer
    int f1=1;
    int f2=1;
    int temp;
    long int f=0;
    printf("Using Integer Recurrence Relation:\n");
    for(int i=0;i<51;i++)
    {
        f=f1+f2;
        
        printf("%ld\n",f);
        f1=f2;
        f2=f;
    }
    //Formula integer
    long int s;
    printf("Using Integer Formula:\n");
    for(int i=1;i<51;i++)
    {
        int s1 = (1+sqrt(5))/2;
        int s2 = (1-sqrt(5))/2;
        s = (1.0 / sqrt(5.0)) * (pow(s1, i) - pow(s2, i));
        printf("%ld\n",s);
    }
    
    
    //recurrence float
    float fl1=1;
    float fl2=1;
    float tempf;
    float fl=0;
    printf("Using Float Recurrence Relation:\n");
    for(int i=0;i<51;i++)
    {
        fl=fl1+fl2;
        
        printf("%f\n",fl);
        fl1=fl2;
        fl2=fl;
    }
    //Formula Float
   
    printf("Using Float Formula:\n");
    for(int i=1;i<51;i++)
    {
        float sf1 = 0.5 * (1.0 + sqrt(5.0));
        float sf2 = 0.5 * (1.0 - sqrt(5.0));


        float sf = (1.0 / sqrt(5.0)) * (pow(sf1, i) - pow(sf2, i));    
        printf("%f\n",sf);
    }

    //recurrence double
    double fd1=1;
    double fd2=1;
    double tempd;
    double fd=0;
    printf("Using Double Recurrence Relation:\n");
    for(int i=0;i<51;i++)
    {
        fd=fd1+fd2;
        
        printf("%lf\n",fd);
        fd1=fd2;
        fd2=fd;
    }
    //Formula Double
   
    printf("Using Double Formula:\n");
    for(int i=1;i<51;i++)
    {
        double sd1 = 0.5 * (1.0 + sqrt(5.0));
        double sd2 = 0.5 * (1.0 - sqrt(5.0));


        double sd = (1.0 / sqrt(5.0)) * (pow(sd1, i) - pow(sd2, i));    
        printf("%lf\n",sd);
    }

}


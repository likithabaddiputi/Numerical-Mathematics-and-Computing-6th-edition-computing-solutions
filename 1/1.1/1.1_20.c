#include<stdio.h>
void assignment_a(int, int);
void assignment_b(double,double);
int main()
{
    int m,n;
    double x=7.4,y=3.8;
    printf("m: ");
    scanf("%d",&m);
    printf("n: ");
    scanf("%d",&n);
    assignment_a(m,n);
    assignment_b(x,y);
    return 0;
}
void assignment_a(int m, int n)
{
    double x,y;
    x=(double)(m/n);
    y=(double)m/(double)n;
    printf("x: %lf\n",x);
    printf("y: %lf\n",y);
}
void assignment_b(double x,double y)
{
    int n;
    n=x+y;
    printf("n: %d\n",n);
    n=(int)x+(int)y;
    printf("n: %d",n);
}

#include<stdio.h>
#include<math.h>
void roots(double c)
{
    printf("Roots when c is %.2e\n",c);
    double a = 1, b = pow(10,8);
    double r1 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    double r2 = c/(a*r1);
    printf("%.16e %.16e\n",r1,r2);
}
int main()
{
    roots(1);
    roots(pow(10,8));
}

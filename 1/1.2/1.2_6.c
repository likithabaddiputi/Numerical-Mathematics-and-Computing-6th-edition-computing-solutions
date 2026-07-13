#include<stdio.h>
#include<math.h>
int main()
{
    double h1=1e-5;
    double h2=-1e-5;
    double add=1.0+0.5*h1-0.125*h1*h1;
    double sub=1.0+0.5*h2-0.125*h2*h2;
    double real_add=sqrt(1.0+h1);
    double real_sub=sqrt(1.0+h2);
    printf("For sqrt(1.00001):\n");
    printf("Taylor: %.15f\n",add);
    printf("Actual: %.15f\n",real_add);
    printf("Error: %e\n",fabs(add-real_add));
    printf("For sqrt(0.99999):\n");
    printf("Taylor: %.15f\n",sub);
    printf("Actual: %.15f\n",real_sub);
    printf("Error: %e\n",fabs(sub-real_sub));
    double limit=(1.0/16.0)*pow(1e-5,3);
    printf("Error limit: %.15e",limit);
    return 0;
}

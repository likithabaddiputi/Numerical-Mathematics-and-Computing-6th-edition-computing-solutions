
#include <stdio.h>

int main()
{
    //a
    float  pi_float  = 3.14159265358979323846;   
    double pi_double  = 3.14159265358979323846;
    printf("Entered value      : 3.14159265358979323846\n");
    printf("Stored as float     : %.20f\n", pi_float);
    printf("Stored as double    : %.20f\n\n", pi_double);


    double r = 2.0;                            

    double pi_full = 3.14159265358979323846;         
    double pi_314  = 3.14;                            

    double C_full = 2.0 * pi_full * r;
    double C_low  = 2.0 * pi_314  * r;

    printf("Using pi high prescision : C = %.15f\n", C_full);
    printf("Using pi = 3.14           : C = %.15f\n", C_314);

    printf("Error (pi = 3.14)  : %.3e\n", C_314  - C_full);

    return 0;
}

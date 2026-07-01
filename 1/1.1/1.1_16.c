#include <stdio.h>
#include <math.h>

int main() {


    // Lower prescision
    float a_float = 2.5;
    float b_float = sqrtf(6.23);
    float c_float = a_float - b_float;
    printf("Result Is %.3f\n",c_float);

    // Higher Prescision
    double a_double = 2.5;
    double b_double = sqrt(6.23);
    double c_double = a_double - b_double;
    printf("Result is %lf\n",c_double);

    //We Observe that with increase in prescision during sqrt phase , the prescision increases


    return 0;
}

#include <stdio.h>
#include <math.h>

#define LN2 0.693147180559945

double exp_series(double u) {
    double term = 1.0;
    double sum = 1.0;
    int n = 1;

    while (fabs(term) > 1e-15) {
        term = term * u / n;
        sum = sum + term;
        n++;
    }

    return sum;
}

double my_exp(double x) {
    double z, w, u, eu;
    int m;

    z = x / LN2;

    if (x >= 0)
        m = (int)(z + 0.5);
    else
        m = (int)(z - 0.5);

    w = z - m;
    u = w * LN2;

    eu = exp_series(u);

    return eu * pow(2, m);
}

int main() {
    double x;

    printf("Enter value of x: ");
    scanf("%lf", &x);

    printf("Using the range reduction method = %lf\n", my_exp(x));
    printf("using the inbuilt function = %lf\n", exp(x));

    return 0;
}

#include <stdio.h>
void wilkinson(int num_roots)
{
    double roots[num_roots];
    for (int i = 0; i < num_roots; i++) {
        roots[i] = i + 1; 
    }
    double poly_coeffs[num_roots + 1];
    for(int i=0;i<=num_roots;++i)
        poly_coeffs[i] = 0.0;
    poly_coeffs[0] = 1.0; 
    int current_degree = 0;
    for (int i = 0; i < num_roots; i++) {
        double r = roots[i];
        for (int j = current_degree + 1; j > 0; j--) {
            poly_coeffs[j] = poly_coeffs[j - 1] - r * poly_coeffs[j];
        }
        poly_coeffs[0] = -r * poly_coeffs[0];
        current_degree++;
    }
    printf("Polynomial coefficients (from x^0 to x^%d):\n", num_roots);
    for (int i = 0; i <= num_roots; i++) {
        printf("x^%d: %14.4f\n", i, poly_coeffs[i]);
    }
}
int main() {
    wilkinson(4);
    printf("\n");
    wilkinson(8); //3.1.10
    printf("\n");
    wilkinson(20); //3.3.9
    
    return 0;
}

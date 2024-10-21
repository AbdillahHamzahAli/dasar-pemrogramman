#include <stdio.h>

int main() {
    int iterations;
    double phi = 0.0;

    printf("Enter the number of iterations: ");
    scanf("%d", &iterations);

    for (int i = 1; i <= iterations; i++) {
        double term = 1.0 / (2 * i - 1);
        if (i % 2 == 1) {
            phi += term;
        } else {
            phi -= term;
        }
    }

    phi *= 4;

    printf("Value of phi after %d iterations: %.7lf\n", iterations, phi);

    return 0;
}
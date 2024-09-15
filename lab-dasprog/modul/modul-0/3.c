#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Masukkan nilai a, b, dan c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Hasil dari (a + b)/c = %.2f ", (a + b) / c);
    return 0;
}
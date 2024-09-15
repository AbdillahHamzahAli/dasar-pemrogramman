#include <stdio.h>

int main(void)
{
    float a, b, c, d, e, jumlah;
    printf("Masukkan nilai a, b, c, d, dan e: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    jumlah = a + b + c + d + e;
    printf("%0.f %.1f", jumlah, jumlah / 5);
    return 0;
}
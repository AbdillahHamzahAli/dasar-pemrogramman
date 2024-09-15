#include <stdio.h>

int main(void)
{
    int p, n, p_ghifari, p_teman;
    printf("Masukkan p dan n: ");
    scanf("%d %d", &p, &n);

    if (p < n)
    {
        printf("P harus lebih besar daripada N");
        return 0;
    }

    p_ghifari = p % n;
    p_teman = (p - p_ghifari) / n;

    printf("teman-teman mendapatkan %d potong \n Ghifari mendapatkan %d potong", p_teman, p_ghifari);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int t_lahir, t_sekarang;
    printf("Masukkan tahun lahir dan tahun sekarang: ");
    scanf("%d %d", &t_lahir, &t_sekarang);

    printf("Umur anda adalah %d tahun", t_sekarang - t_lahir);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(void)
{
    // declaration variables
    int m, n, side1, sidee2, hypotenuse;

    // get input m and n
    printf("masukan nilai m : ");
    scanf("%d", &m);
    printf("masukan nilai n : ");
    scanf("%d", &n);

    // return error if m or n is negative and m < n
    if (m < 0 || n < 0 || m < n)
    {
        printf("nilai m dan n harus positif dan m harus lebih besar dari n");
        return 0;
    }

    // formula
    side1 = pow(m, 2) - pow(n, 2);
    sidee2 = 2 * m * n;
    hypotenuse = pow(m, 2) + pow(n, 2);

    // print output
    printf("side1 : %d\nside2 : %d\nhypotenuse : %d\n", side1, sidee2, hypotenuse);
    return 0;
}
#include <stdio.h>

int main () {
    int N, K;
    int ongkir = 50000;
    int s_uang = 300000;

    scanf("%d %d", &N, &K);

    int diskon = 0;
    if(N == 1) {
        diskon = 35;
    } else if(N == 2) {
        diskon = 45;
    } else if(N == 3) {
        diskon = 50;
    } else if(N == 4) {
        diskon = 55;
    } else if(N == 5) {
        diskon = 40;
    }

    K = K - (K * diskon/100);

    if(K >= 250000) {
        ongkir -= 50000;
    } else if(K >= 150000) {
        ongkir -= 25000;
    } else if(K >= 50000) {
        ongkir -= 12500;
    } else {
        ongkir -= 0;
    }

    int res = K + ongkir;

    if(res > s_uang) {
        printf("Mamaa minta uang, uangku kurang %d :((\n", (res - s_uang));
        printf("Totalnya tadi %d\n", res);
    }
    else if(res == s_uang){
        printf("Yeyyy totalnya pas %d\n", res);
        printf("Mamaa, Surip udah gede ga jadi minta uang :)\n");
    }
    else if(res < s_uang) {
        printf("WOHHHH uangku sisa %d\n", (s_uang - res));
        printf("Mamaa Surip bisa kasi THR ke adek adek, tadi totalnya %d\n", res);
    }

}

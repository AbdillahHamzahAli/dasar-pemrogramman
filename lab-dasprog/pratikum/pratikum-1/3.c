#include <stdio.h>

int main(void){
    int a1, b1, a2,b2,a3,b3;
    unsigned char c1,c2,c3,c4;
    int d1,d2,d3,d4;

    // input
    scanf("%d %d\n%d %d\n%d %d\n",&a1,&b1,&a2,&b2,&a3,&b3);
    scanf("%c %u\n%c %u\n%c %u\n%c %u\n",&c1,&d1,&c2,&d2,&c3,&d3,&c4,&d4);

    // posisi sekarang
    int x = 0, y= 0;
    int i = 0, j = 0;
    // banyak potongan yang diambil
    int n = 0; // max 3

    // arah K1
    if(c1 == 'W'){
        y += d1;
        j = y - d1;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(x == a1 && b1 > j && b1 < y){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x == a2 && b2 > j && b2 < y){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && b3 > j && b3 < y){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c1 == 'A'){
        x -= d1;
        i = x + d1;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(y == b1 && a1 > x && a1 < i){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(y == b2 && a2 > x && a2 < i){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(y == b3 && a3 > x && a3 < i){
            n++;
            a3 = 500;
            b3 = 500;
        }

    } else if(c1 == 'S'){
        y -= d1;
        j = y + d1;

        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(x == a1 && b1 > y && b1 < j){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x == a2 && b2 > y && b2 < j){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && b3 > y && b3 < j){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c1 == 'D'){
        x += d1;
        i = x - d1;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(y == b1 && a1 < x && a1 > i){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(y == b2 && a2 < x && a2 > i){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(y == b3 && a3 < x && a3 > i){
            n++;
            a3 = 500;
            b3 = 500;
        }
    }

    // printf("x : %d, y: %d\n",x,y);

    // arah K2
    if(c2 == 'W'){
        y += d2;
        j = y - d2;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(x == a1 && b1 > j && b1 < y){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x == a2 && b2 > j && b2 < y){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && b3 > j && b3 < y){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c2 == 'A'){
        x -= d2;
        i = x + d2;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(y == b1 && a1 > x && a1 < i){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(y == b2 && a2 > x && a2 < i){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(y == b3 && a3 > x && a3 < i){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c2 == 'S'){
        y -= d2;
        j = y + d2;

        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(x == a1 && b1 > y && b1 < j){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x == a2 && b2 > y && b2 < j){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && b3 > y && b3 < j){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c2 == 'D'){
        x += d2;
        i = x - d2;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(y == b1 && a1 < x && a1 > i){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(y == b2 && a2 < x && a2 > i){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(y == b3 && a3 < x && a3 > i){
            n++;
            a3 = 500;
            b3 = 500;
        }
    }
    // printf("x : %d, y: %d\n",x,y);

    // ARAH K3
    if(c3 == 'W'){
        y += d3;
        j = y - d3;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(x == a1 && b1 > j && b1 < y){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x == a2 && b2 > j && b2 < y){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && b3 > j && b3 < y){
            n++;
            a3 = 500;
            b3 = 500;
        }

    } else if(c3 == 'A'){
        x -= d3;
        i = x + d3;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(y == b1 && a1 > x && a1 < i){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(y == b2 && a2 > x && a2 < i){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(y == b3 && a3 > x && a3 < i){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c3 == 'S'){
        y -= d3;
        j = y + d3;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(x == a1 && b1 > y && b1 < j){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x == a2 && b2 > y && b2 < j){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && b3 > y && b3 < j){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c3 == 'D'){
        x += d3;
        i = x - d3;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(y == b1 && a1 < x && a1 > i){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(y == b2 && a2 < x && a2 > i){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(y == b3 && a3 < x && a3 > i){
            n++;
            a3 = 500;
            b3 = 500;
        }
    }
    // printf("x : %d, y: %d\n",x,y);

    if(c4 == 'W'){
        y += d4;
        j = y - d4;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(x == a1 && b1 > j && b1 < y){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x == a2 && b2 > j && b2 < y){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && b3 > j && b3 < y){
            n++;
            a3 = 500;
            b3 = 500;
        }

    } else if(c4 == 'A'){
        x -= d4;
        i = x + d4;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(y == b1 && a1 > x && a1 < i){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(y == b2 && a2 > x && a2 < i){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(y == b3 && a3 > x && a3 < i){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c4 == 'S'){
        y -= d4;
        j = y + d4;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(x == a1 && b1 > y && b1 < j){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x == a2 && b2 > y && b2 < j){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && b3 > y && b3 < j){
            n++;
            a3 = 500;
            b3 = 500;
        }
    } else if(c4 == 'D'){
        x += d4;
        i = x - d4;
        if(x == a1 && y == b1){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(x== a2 && y == b2){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(x == a3 && y == b3){
            n++;
            a3 = 500;
            b3 = 500;
        }
        if(y == b1 && a1 < x && a1 > i){
            n++;
            a1 = 500;
            b1 = 500;
        }
        if(y == b2 && a2 < x && a2 > i){
            n++;
            a2 = 500;
            b2 = 500;
        }
        if(y == b3 && a3 < x && a3 > i){
            n++;
            a3 = 500;
            b3 = 500;
        }
    }
    // printf("x : %d, y: %d\n",x,y);

    if(n > 3){
        n = 3;
    }

    if(n == 0){
        printf("Aku kangen kamu Zhong Li\n");
    } else {
        printf("%d",n);
    }

    return 0;
}
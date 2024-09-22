#include <stdio.h>
#include <math.h>

int main(void){
    unsigned long long angka;
    scanf("%llu", &angka);

    // 2 4 7 9
    unsigned long long a = (angka % 2);
    unsigned long long b = (angka % 4);
    unsigned long long c = (angka % 7);
    unsigned long long d = (angka % 9);

// 0000 -
// 0001 -
// 0010 -
// 0011 -
// 0100 -
// 0101 -
// 0110 -
// 0111 -
// 1000 -
// 1001
// 1010
// 1011
// 1100
// 1101
// 1110
// 1111

    if(a == 0 && b == 0 && c == 0 && d == 0){
        // 0000
        printf("aku suka dasar pemrograman");
    } else if(a == 0 && b == 0 && c == 0 && d != 0){
        // 0001
        printf("aku suka %llu dasar pemrograman", d);
    } else if(a == 0 && b == 0 && c != 0 && d == 0){
        // 0010
        printf("aku suka %llu dasar pemrograman", c);
    } else if(a == 0 && b == 0 && c != 0 && d != 0){
        // 0011
        printf("aku suka %llu dasar pemrograman", (c*10) +  d);
    } else if(a == 0 && b != 0 && c == 0 && d == 0){
        // 0100
        printf("aku suka %llu dasar pemrograman", b);
    } else if(a == 0 && b != 0 && c == 0 && d != 0){
        // 0101
        printf("aku suka %llu dasar pemrograman", (b*10) + d);
    } else if(a == 0 && b != 0 && c != 0 && d == 0){
        // 0110
        printf("aku suka %llu dasar pemrograman", (b*10) + c);
    } else if(a == 0 && b != 0 && c != 0 && d != 0){
        // 0111
        printf("aku suka %llu dasar pemrograman", (b*100) + (c*10) + d);
    } else if(a != 0 && b == 0 && c == 0 && d != 0){
        // 1000
        printf("aku suka %llu dasar pemrograman", a);
    } else if (a!=0 && b == 0 && c == 0 && d != 0){
        // 1001
        printf("aku suka %llu dasar pemrograman", (a*10) + d);
    } else if (a != 0 && b == 0 && c != 0 && d == 0){
        // 1010
        printf("aku suka %llu dasar pemrograman", (a*10) + c);
    } else if (a != 0 && b == 0 && c != 0 && d != 0){
        // 1011
        printf("aku suka %llu dasar pemrograman", (a*100) + (c*10) + d);
    } else if (a != 0 && b != 0 && c == 0 && d == 0){
        // 1100
        printf("aku suka %llu dasar pemrograman", (a*10) + b);
    } else if (a != 0 && b != 0 && c == 0 && d != 0){
        // 1101
        printf("aku suka %llu dasar pemrograman", (a*100) + (b*10) + d);
    } else if (a != 0 && b != 0 && c != 0 && d == 0){
        // 1110
        printf("aku suka %llu dasar pemrograman", (a*100) + (b*10) + c);
    } else if (a != 0 && b != 0 && c != 0 && d != 0){
        // 1111
        printf("aku suka %llu dasar pemrograman", (a*1000) + (b*100) + (c*10) + d);
    }

    return 0;
}


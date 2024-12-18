#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    unsigned long long total = 1;
    for(int i = 1; i <= n; i++){
        total *= i;
    }
    printf("%llu", total);
}
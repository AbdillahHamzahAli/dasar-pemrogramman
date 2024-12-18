#include <stdio.h>
#include <math.h>

int main(){
    int n; scanf("%d", &n);
    unsigned long long total = 0;
    for(int i = 1; i <= n;i++){
        total += pow(i,2);
    }

    printf("%llu", total);
}

#include <stdio.h>
#include <math.h>

long long k(int n){
    if(n==1) return 2;
    return 3*k(n-1);
}

int main(){
    int n; scanf("%d", &n);
    printf("Ada %lld model, bebaskan aku!", k(n));
}
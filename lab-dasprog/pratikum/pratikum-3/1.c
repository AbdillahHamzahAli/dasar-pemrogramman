#include <stdio.h>

long long prev = 0,next = 0, res =0;

long long fib(long long i,long long j,unsigned int x){
    if(j+i > x){
        prev = j;
        next = i+j;
        return 0;
    }
    return fib(j,i+j,x);
}

long long revfib(long long i,long long j){
    if(j <= 0){
        printf("0");
        return 0;
    }
    res += j;
    printf("%lld ", j);
    return revfib(j,i-j);
}


int main(){
    // fibonanci
    unsigned int X;
    scanf("%d",&X);
    if(X == 0){
        printf("0\n0");
        return 0;
    }
    fib(0,1,X);
    // printf("%lld,%lld",next,prev);
    revfib(next,prev);
    printf("\n%lld",res);
}
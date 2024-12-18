#include <stdio.h>
                            
/*
                            
f(n) = f(n-1) + f(n-1) + ∑ i = 1 to n

*/ 
long long f(int n){
    long long res = 0;
    if(n == 0) return 0;
    for(int i = 1; i <= n; i++){
        res+= i;
    }
    return res + (2*f(n-1)); 
};

int main() {
    int n; scanf("%d", &n);
    // f(n);
    printf("%lld", f(n));

}
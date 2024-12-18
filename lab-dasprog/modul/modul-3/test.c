#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n*n; i++){
        if((i-1)%n == 0) printf("\n");
        printf("%d ", i);
    }
}
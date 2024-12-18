#include <stdio.h>


int faktorial(int n){
    if(n <= 0){
        return 1;
    }    
    return n * faktorial(n-1);
}


int main(){
    int n;
    scanf("%d", &n);
    int res = faktorial(n);
    printf("%d", res);
}
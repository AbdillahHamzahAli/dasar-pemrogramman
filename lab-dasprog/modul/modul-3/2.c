#include <stdio.h>

int hitung(int n){
    if(n <= 1){
        return 1;
    }
    return n*n + hitung(n-1);
}

int main(){ 
    // 1, 5, 14, 30
    int res;
    scanf("%d", &res);
    int res_hitung = hitung(res);
    printf("%d", res_hitung);
}

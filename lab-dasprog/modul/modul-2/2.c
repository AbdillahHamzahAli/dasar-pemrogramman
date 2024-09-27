#include <stdio.h>

int main(){
    int n;
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    // hanya untuk bilangan positif
    for(int i = 1; i <= n; i++){
        if(i %2 == 0){
            printf("* ");
        } else{
            printf("%d ", i);
        }
    }
}
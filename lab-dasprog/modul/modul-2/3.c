#include <stdio.h>

int main(){
    int bilangan;
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    for(int i = 2; i <= bilangan; i++){
        if(i == 2 || i == 3){
            printf("* ");
            continue;
        }
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                printf("%d ", i);
                break;
            } else if(i % j != 0 && j == i - 1){
                printf("* ");
                break;
            }
        }
    }

}
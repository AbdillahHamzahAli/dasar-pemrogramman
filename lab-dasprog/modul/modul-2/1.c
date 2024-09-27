#include <stdio.h>

int main(){
    int bilangan;
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    // while(bilangan < 0){
    //     printf("Masukkan bilangan: ");
    //     scanf("%d", &bilangan);
    // }

    if(bilangan % 2 == 0){
        printf("genap");
    } else {
        printf("ganjil");
    }
}
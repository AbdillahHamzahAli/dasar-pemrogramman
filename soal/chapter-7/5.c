// BARCODE

#include <stdio.h>
#define BARCODE 12

int sumOdd(int arr[]);
int sumEven(int arr[]);

int main(){
    int check_digit = 0;
    int array[12] = {0,0,0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 12; i++){
        scanf("%d", &array[i]);
    }
    
    int res1 = sumOdd(array) * 3;
    printf("first - %d\n", res1);

    int res2 = res1 + sumEven(array);
    printf("two - %d\n", res2);

    if(res2 % 10 == 0){
        check_digit = 0;
    } else {
        check_digit = 10 - (res2 % 10);
    }

    if(check_digit == array[BARCODE - 1]){
        printf("validated\n");
    }else{
        printf("error in barcode\n");
    }

}

int sumOdd(int arr[]){
    int sum = 0;
    for(int i = 0; i < BARCODE; i+=2){
        sum += arr[i];
    }
    return sum;
}

int sumEven(int arr[]){
    int sum = 0;
    for(int i = 1; i < BARCODE - 1; i+=2){
        sum += arr[i];
    }
    return sum;
}

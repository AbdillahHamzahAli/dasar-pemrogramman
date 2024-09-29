#include <stdio.h>

int main(){
    float a = 1;
    while(a != 0){
        scanf("%e", &a);
        if(a == 0) return 0;
        if(a >= 3E-11 && a < 3E-9){
            printf("gamma Ray\n");
        } else if(a < 4E-7){
            printf("X-ray\n");
        } else if(a < 7E-7){
            printf("ultraviolet\n");
        } else if(a < 1.4E-5){
            printf("visible\n");
        } else if(a < 1.0E-1){
            printf("infrared\n");
        } else if(a < 10){
            printf("microwave\n");
        } else if(a > 10){
            printf("radio\n");
        }
    }
    return 0;
}
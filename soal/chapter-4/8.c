#include <stdio.h>

int main(void){
    int fs_num;
    double num_of_mil;
    /*
        (1) First Free Service
        (2) Second Free Service
        Enter the Free Service number>> 2
        Enter number of Miles>> 3557
        Vehicle must be serviced.
    */
    printf("(1) First Free Service\n(2) Second Free Service\n");
    printf("Enter the Free Service number>> ");
    scanf("%d", &fs_num);
    printf("Enter number of Miles>> ");
    scanf("%lf", &num_of_mil);

    if(fs_num == 1 && num_of_mil > 1500 && num_of_mil <= 3000){
        printf("Vehicle must be serviced.");
    } else if(fs_num == 2 && num_of_mil > 3001 && num_of_mil <= 4500){
        printf("Vehicle must be serviced.");
    } else {
        printf("Invalid Free Service number.");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    
    // Count digits
    while (num != 0) {
        digits++;
        num /= 10;
    }
    
    num = originalNum;
    
    // Calculate sum of powers of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    
    return (sum == originalNum);
}

int main() {
    int num;
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &num);
    
    if (isArmstrong(num)) {
        printf("%d adalah bilangan Armstrong.\n", num);
    } else {
        printf("%d bukan bilangan Armstrong.\n", num);
    }
    
    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int T; scanf("%d", &T); 
    
    int maxValue = 0;
    int maxCount = 0;
    
    int array[T];
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < T; ++i) {
        int count = 0;
        
        for (int j = 0; j < T; ++j) {
            if (array[j] == array[i]) {
                ++count;
            }
        }
        
        //cek modus, moodus paling besar
        if (count > maxCount || (count == maxCount && array[i] > maxValue)) {
            maxCount = count;
            maxValue = array[i];
        }
    }
    
    int isPrime = 1; //cek prima
    if (maxValue <= 1) {
        isPrime = 0; 
    } 
    else {
        for (int i = 2; i <= sqrt(maxValue); i++) {
            if (maxValue % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    printf("Modus: %d\n", maxValue);
    
    if (isPrime) {
        printf("Wah, modusnya prima nihh.\n");
    } 
    else {
        printf("Yah, modusnya gak prima.\n");
    }
    
    return 0;
}
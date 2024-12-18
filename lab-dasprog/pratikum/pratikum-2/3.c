#include <stdio.h>
#include <math.h>

int main() {
    int T; 
    scanf("%d", &T); 
    
    int res = 0,max = 0;
    int N[T];
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &N[i]);
    }
    // cek modus
    for (int i = 0; i < T; ++i) {
        int c = 0;
        for (int j = 0; j < T; ++j) {
            if (N[j] == N[i]) {
                ++c;
            }
        }
        if (c > max || (c == max && N[i] > res)) {
            max = c;
            res = N[i];
        }
    }
    // cek prima
    int isPrime = 1;
    if (res <= 1) {
        isPrime = 0; 
    } 
    else {
        for (int i = 2; i <= sqrt(res); i++) {
            if (res % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    printf("Modus: %d\n", res);
    
    if (isPrime) {
        printf("Wah, modusnya prima nihh.\n");
    } 
    else {
        printf("Yah, modusnya gak prima.\n");
    }
    
    return 0;
}
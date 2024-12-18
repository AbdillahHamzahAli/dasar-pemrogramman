#include <stdio.h>

int main() {
    int Q, K;

    scanf("%d %d", &Q, &K);

    int cows[Q];
    for (int i = 0; i < Q; i++) {
        cows[i] = i + 1;
    }

    int iPtr = 0;

    for(int i = Q; i > 0; i--) {
        iPtr = (iPtr + K - 1) % i;
        for (int j = iPtr; j < i - 1; j++) {
            cows[j] = cows[j + 1];
        }
    }

    printf("yapp, sapi ke %d sepertinya memang yang terbaik.\n", cows[0]);

    return 0;
}

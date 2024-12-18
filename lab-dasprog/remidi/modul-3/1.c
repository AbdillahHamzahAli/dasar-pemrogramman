#include <stdio.h>
long long f(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return f(n-1) + f(n-2) + f(n-3);
}

void rev(int c, int isEven) {
    if (c < 0) return;
    if (c % 2 == isEven) {
        printf("%lld ", f(c));
    }
    rev(c - 1, isEven);
}

int main() {
    int n; scanf("%d", &n);
    int isEven = n % 2;
    rev(n, isEven);
}
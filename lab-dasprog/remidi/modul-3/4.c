
#include <stdio.h>

int f(int x) {
    if (x % 2 == 0) {
        return x / 2;
    } else {
        return 2 * x;
    }
}

int g(int x) {
    if (x % 2 == 0) {
        return x + 2;
    } else {
        return x - 2;
    }
}

int F(int x, int n) {
    if (n == 1) {
        return f(x);
    } else if (n % 2 == 0) {
        return g(x + F(x, n - 1));
    } else {
        return f(x + F(x, n - 1));
    }
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d\n", F(x, n));
    return 0;
}

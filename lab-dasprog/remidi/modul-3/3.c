#include <stdio.h>

long long fpb(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return fpb(b, a % b);
}
int main(){
    long long d,h;
    scanf("%lld %lld", &d, &h);
    printf("%lld\n", fpb(d, h));
}
#include <stdio.h>

struct bilangan
{
    double a,b,n
};

double fn(double a, double b, double n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 2;
    } else if (n == 2) {
        return (a + b);
    } else if (n == 3) {
        return 5;
    } else if (n > 3 && ((int)n % 2 == 0)) {
        return (int)((a * fn(n - 2, b, n - 2) + b) % 1000000007);
    } else if (n > 3 && ((int)n % 2 != 0)) {
        return (int)((4 * (fn(n - 2, b, n - 2) - fn(n - 4, b, n - 4)) + (pow(n - 1, 2) / 4)) % 1000000007);
    }
    return 0;
}

int main(){
    int T; scanf("%d",&T);
    struct bilangan bilangans[T];

    for(int i=0;i<T;i++){
        scanf("%d %d %d",&bilangans[i].a,&bilangans[i].b,&bilangans[i].n);
    }
    for(int i=0;i<T;i++){
        fn(bilangans[i].a,bilangans[i].b,bilangans[i].n);
    }
 
}
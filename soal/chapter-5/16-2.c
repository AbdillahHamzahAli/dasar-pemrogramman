#include <stdio.h>
#include <math.h>

int main(){
    double c,n,x0,x1;
    printf("enter c : ");
    scanf("%lf",&c);
    printf("enter n : ");
    scanf("%lf",&n);

    x0=c/2;
    x1 = x0 - ((pow(x0,n) - c)/(n*pow(x0,n-1)));

    for(int i = 0; i < 100; i++){
        x1 = x1 - ((pow(x1,n) - c)/(n*pow(x1,n-1)));
    }

    printf("%.6f", x1);

    return 0;
}
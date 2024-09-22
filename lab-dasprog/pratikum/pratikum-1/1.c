#include <stdio.h>
#include <math.h>

int main(void){
    int a;
    scanf("%d", &a);
    
    double x = (a * (a+1))/2;
    double y = pow(x,2);

    printf("%.lf",y);

    return 0;
}
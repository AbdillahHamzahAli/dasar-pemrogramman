#include <stdio.h>
#include <math.h>

void func(double *LG, double *NG, double N);

int main(){
    double N, difference = 0.005;
    printf("Enter n : ");
    scanf("%lf", &N);

    double LG = 1.0;
    double NG = 0.5 * (LG + N/LG);

    while((fabs(LG - NG)) >= difference){
        func(&LG,&NG,N);
    }

    printf("approximated %.2lf = %lf", N , NG);
}

void func(double *LG, double *NG, double N){
    *LG = *NG;
    *NG = 0.5 * (*LG + N / *LG);
}
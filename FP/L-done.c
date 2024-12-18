#include <stdio.h>

#define PHI 3.14159265358979323846

int main(){
    long double V; 
    scanf("%Lf", &V);

    long double r, t, alas;  

    r = cbrtl(V / (2 * PHI));
    t = 2 * r; 
    alas = 2 * PHI * r * (r + t);
    printf("Luas permukaan: %.2Lf\n", alas);
    
    return 0;
}
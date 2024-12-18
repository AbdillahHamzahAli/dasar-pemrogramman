#include <stdio.h>


int main() {
    double x1, y1, x2, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    double o1 = (y2-y1)/(x2-x1);
    double o2 = y1 - o1 * x1;

    if(x1 == x2){
        printf("-_-");
    } else {
        printf("%.2lf %.2lf", o1, o2);
    }

}

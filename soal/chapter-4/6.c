#include <stdio.h>

int main(void){
    // declare variables
    double x,y;
    // input
    printf("Input x and y: ");
    scanf("%lf %lf", &x, &y);
    // calculate
    /*
        Q1 X positif and Y positif
        Q2 X positif and Y negatif

        Q3 X negatif and Y positif
        Q4 X negatif and Y negatif

        if X = 0 in on the y-axis
        if Y = 0 in on the x-axis
    */
    if(x > 0 && y > 0){
        printf("(%.1f, %.1f) is in quadrant I" , x, y);
    } else if(x > 0 && y < 0){
        printf("(%.1f, %.1f) is in quadrant IV" , x, y);
    } else if(x < 0 && y > 0){
        printf("(%.1f, %.1f) is in quadrant II" , x, y);
    } else if(x < 0 && y < 0){
        printf("(%.1f, %.1f) is in quadrant III" , x, y);
    } else if(x == 0){
        printf("(%.1f, %.1f)is on the y-axis", x, y);
    } else if(y == 0){
        printf("(%.1f, %.1f)is on the x-axis", x, y);
    } else {
        printf("(%.1f, %.1f) is in the origin point\n", x, y); // (0, 0)
    }

    return 0;
}
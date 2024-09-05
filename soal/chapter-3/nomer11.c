#include <stdio.h>
#include <math.h>

float speeds_ratio(float max, float min);

int main(void)
{
    // declaration variable
    float max, min, ratio;

    // input max speed
    printf("Enter max speed: ");
    scanf("%f", &max);

    // input min speed
    printf("Enter min speed: ");
    scanf("%f", &min);

    // formula
    ratio = speeds_ratio(max, min);

    // print output
    /*
        The ratio between successive speeds of a six-speed gearbox
        with maximum speed __________ rpm and minimum speed __________
        rpm is __________.
    */
    printf("The ratio between successive speeds of a six-speed gearbox with maximum speed %.2f rpm and minimum speed %.2f rpm is %.2f.\n", max, min, ratio);
    return 0;
}

float speeds_ratio(float max, float min)
{
    return pow(max / min, 1 / 5);
}
#include <stdio.h>

int main(void)
{
    float x1, y1, x2, y2, slope, mindpoint_x, mindpoint_y, perp_slope, y_intercept;

    // input two points
    printf("input coordinates of point 1 (x , y) : ");
    scanf("%f %f", &x1, &y1); // 2.0, -4.0

    printf("input coordinates of point 2 (x , y) : ");
    scanf("%f %f", &x2, &y2); // 7.0 , -2.0

    // calculate slope of two points
    slope = (y2 - y1) / (x2 - x1); // 0,4

    // calculate mindpoint
    mindpoint_x = (x1 + x2) / 2; // 4.5
    mindpoint_y = (y1 + y2) / 2; // -3

    // calculate slope of the perpendicular bisector
    perp_slope = -1 / slope; // -2.5

    // calculate y-intercept of the perpendicular bisector
    y_intercept = mindpoint_y - perp_slope * mindpoint_x;

    // print output
    printf("point1 : (%.2f, %.2f)\n point2 : (%.2f, %.2f)\n", x1, y1, x2, y2);
    printf("y = %.2fx + %.2f", perp_slope, y_intercept); // y = mx + b

    return 0;
}
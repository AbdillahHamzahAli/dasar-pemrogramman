#include <stdio.h>

// declaration function;
float celsius_at_depth(float depth);
float fahrenheit(float celsius);

int main(void)
{
    // declaration variable;
    float depth, celsius, fahrenheit_temp;
    // input depth
    printf("Enter depth: ");
    scanf("%f", &depth);
    // compute in celsius
    celsius = celsius_at_depth(depth);
    // compute in fahrenheit
    fahrenheit_temp = fahrenheit(celsius);
    // print output
    printf("Celsius: %.2f\n", celsius);
    printf("Fahrenheit: %.2f\n", fahrenheit_temp);
    return 0;
}

float celsius_at_depth(float depth)
{
    return 10 * depth + 20;
}

float fahrenheit(float celsius)
{
    return 1.8 * celsius + 32;
}

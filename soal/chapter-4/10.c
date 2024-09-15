#include <stdio.h>

double type_t(char type_b, double a, double b);
void intruction();
double compute_time(char);

int main(void)
{
    // input type of bread (W = white, S = Sweet)
    char type_b;
    double time;

    intruction();
    scanf("%c", &type_b);

    // compute time;
    time = compute_time(type_b);
    printf("Time to bake: %.2lf mins\n", time);

    return 0;
}

void intruction()
{
    printf("What type of bread do you want to order?\n");
    printf("White bread (W) or Sweet bread (S)\n");
    printf("Type: ");
}

double compute_time(char type_b)
{
    int loaf_double, manual;
    double time, t;

    if (type_b != 'W' && type_b != 'w' && type_b != 'S' && type_b != 's')
    {
        printf("Invalid input\n");
        return -1;
    }

    printf("Do you want the loaf to be double? 1 for yes and 0 for no: ");
    scanf("%d", &loaf_double);
    printf("Do you want the baking to be manual? 1 for yes and 0 for no: ");
    scanf("%d", &manual);

    t = type_t(type_b, 15, 20);
    printf("Primary kneading %.2f mins\n", t);
    time += t;

    t = type_t(type_b, 60, 60);
    printf("Primary rising %.2f mins\n", t);
    time += t;

    t = type_t(type_b, 18, 33);
    printf("Secondary kneading %.2f mins\n", t);
    time += t;

    t = type_t(type_b, 20, 30);
    printf("Secondary rising %.2f mins\n", t);
    time += t;

    t = type_t(type_b, ((double)2 / 60), ((double)2 / 60));
    printf("Loaf shaping %.2f mins\n", t);
    time += t;

    if (manual)
    {
        return time;
    }

    t = type_t(type_b, 75, 75);
    printf("Final rising %.2f mins\n", t);
    time += t;

    t = type_t(type_b, 45, 35);
    printf("Loaf double %.2f mins\n", t);
    t += (loaf_double) ? t * 0.5 : 0;
    printf("Baking %.2f mins\n", t);
    time += t;

    t = type_t(type_b, 30, 30);
    printf("Cooling %.2f mins\n", t);
    time += t;

    return time;
}

double type_t(char type_b, double a, double b)
{
    if (type_b == 'W' || type_b == 'w')
    {
        return a;
    }
    else
    {
        return b;
    }
}

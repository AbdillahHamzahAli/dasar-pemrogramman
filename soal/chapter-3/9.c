#include <stdio.h>
#include <math.h>

void predict_formula();

int main(void)
{
    int day;
    printf("FLU EPIDEMIC PREDICTIONS BASED ON ELAPSED DAYS SINCE FIRST CASE REPORT \n");

    predict_formula();
    predict_formula();
    predict_formula();

    return 0;
}

void predict_formula()
{
    /* input */
    int day;
    printf("Enter day number>> ");
    scanf("%d", &day);

    /* compute */
    int i = 40000 / (1 + 39999 * exp(-0.24681 * day));

    /* print output */
    printf("By day %d, model predicts %d cases total.\n", day, i);
}

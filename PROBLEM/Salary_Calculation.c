#include <stdio.h>

int main(void)
{
    double MS, MW, TS;

    printf("Monthly Salary = ");
    scanf("%lf", &MS);

    printf("Months Worked =");
    scanf("%lf", &MW);

    TS = MS * MW;

    printf("Total Salary = %lf", TS);

    return 0;
}
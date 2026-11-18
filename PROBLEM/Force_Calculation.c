#include <stdio.h>
/*Force Calculation
বল নির্ণয়
বল = ভর × ত্বরণ
Force = Mass × Acceleration (F = m × a)*/
int main(void)
{
    double m, a, F;

    printf("Mass = ");
    scanf("%lf", &m);

    printf("Acceleration =");
    scanf("%lf", &a);

    F = m * a;

    printf("Area = %lf", F);

    return 0;
}
#include <stdio.h>
/*
Temperature Conversion
তাপমাত্রা রূপান্তর
ফারেনহাইট = (সেলসিয়াস × 9/5) + 32
F = (C × 9/5) + 32
*/
int main (void)
{
    double F, C;

    printf("Celsius= ");
    scanf("%lf", &C);

    F = (C * 9/5) + 32;

    printf("Fahrenheit = %lf", F);

    return 0;
}
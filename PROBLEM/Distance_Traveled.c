#include <stdio.h>
/*Distance Traveled
অতিক্রান্ত দূরত্ব
দূরত্ব = বেগ × সময়
Distance = Speed × Time (d = s × t)*/
int main(void)
{
    double s, t, D;

    printf("Speed = ");
    scanf("%lf", &s);

    printf("Time =");
    scanf("%lf", &t);

    D = s * t;

    printf("Distance = %lf", D);

    return 0;
}
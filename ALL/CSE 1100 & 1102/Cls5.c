#include<stdio.h>

void main()
{
    double a, b, Area;

    printf("a =");
    scanf("%lf", &a);

    printf("b =");
    scanf("%lf", &b);

    Area = 0.5 * a * b;
    printf("Area = %lf", Area);
}
#include<stdio.h>

void main()
{
    double a, b,W, X, Y, Z;

    printf("a =");
    scanf("%lf", &a);

    printf("b =");
    scanf("%lf", &b);

    W = a + b;
    X = a - b;
    Y = a * b;
    Z = a / b;

    printf("Sum is = %lf\n", W);
    printf("Diff is = %lf\n", X);
    printf("Mul is = %lf\n", Y);
    printf("Div is = %lf\n", Z);

}
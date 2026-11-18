#include <stdio.h>

int main()
{
    double a, b, W, X, Y, Z;

    a = 9.67;
    b = 8.754;

    W = a + b;
    X = a - b;
    Y = a * b;
    Z = a / b;

    printf("Addition(+) is: %lf\n\n", W);
    printf("Subtraction(-) is: %0.2lf\n\n", X);
    printf("Multiplication(×)  is: %0.3lf\n\n", Y);
    printf("Division(÷) is: %0.4lf\n", Z);

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, w, x, y, z;

    scanf("%d", &a);
    scanf("%d", &b);

    w = a + b;
    x = a - b;
    y = a * b;
    z = a / b;

    printf("Addition(+) is: %d\n\n", w);
    printf("Subtraction(-) is: %d\n\n", x);
    printf("Multiplication(×)  is: %d\n\n", y);
    printf("Division(÷) is: %d", z);


    return 0;
}   
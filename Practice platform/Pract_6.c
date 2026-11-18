#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter the first angle:", a);
    scanf("%d", &a);

    printf("Enter the second angle:", b);
    scanf("%d", &b);

    c = 180 - (a + b);

    printf("The third angle is: %d degrees", c);
}
#include <stdio.h>

void main()
{
    int n, sum = 0;

    printf("Enter an integer:");
    scanf("%d", &n);

    for (; n != 0;)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("The sum of the digits is: %d", sum);
}
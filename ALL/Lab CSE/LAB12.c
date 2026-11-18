#include <stdio.h>

void main()
{
    int n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (;n != 0;)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

   
}
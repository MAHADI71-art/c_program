#include<stdio.h>

void main()
{
    int n, i, factorial = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        factorial = factorial * i;
    }

    printf("\n\nFactorial = %d", factorial);
}
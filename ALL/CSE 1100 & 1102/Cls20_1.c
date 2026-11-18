#include <stdio.h>

void main()
{
    int N;
    scanf("%d", &N);

    int factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        factorial = factorial * i;
    }
    printf("\nFactorial = %d\n", factorial);
}
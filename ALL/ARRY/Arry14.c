// Factorial
#include <stdio.h>

int factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers\n");
    }
    else
    {
        printf("factorial of %d = %d\n", n, factorial(n));
    }

    return 0;
}

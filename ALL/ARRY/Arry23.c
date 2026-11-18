#include <stdio.h>

int sum_of_digit(int a)
{
    int remainder, sum = 0;
    while (a > 0)
    {
        remainder = a % 10;
        a /= 10;
        sum += remainder;
    }
    return sum;
}

int main()
{
    int a;
    scanf("%d", &a);

    printf("%d", sum_of_digit(a));

    return 0;
}

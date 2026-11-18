#include <stdio.h>

int main(void)
{
    int n, t, reverse = 0;

    printf("Enter the digits:");
    scanf("%d", &n);

    t = n;

    for (; n != 0;)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    if (t < 0)
    {
        printf("%d is not a palindrome number.\n", t);
    }
    else if (t == reverse)
    {
        printf("%d is a palindrome number.\n", t);
    }

    else
    {
        printf("%d is not a palindrome number.\n", t);
    }

    return 0;
}

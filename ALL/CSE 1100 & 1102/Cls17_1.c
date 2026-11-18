
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int number_of_digit = 0;

    while (n != 0)
    {
        number_of_digit++;
        n /= 10;
    }
    printf("% d", number_of_digit);

    return 0;
}

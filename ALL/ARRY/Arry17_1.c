// digit count
#include <stdio.h>

int dihitcount(int n)
{

    int number_of_digit = 0;

    while (n != 0)
    {
        number_of_digit++;
        n /= 10;
    }
    printf("% d", number_of_digit);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    dihitcount(n);

    return 0;
}
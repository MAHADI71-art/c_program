//digit count
#include <stdio.h>
#include<string.h>

int dihitcount(int n)
{

    int number_of_digit = 0;

    while (n != 0)
    {
        number_of_digit++;
        n /= 10;
    }

    return number_of_digit;
}
int main(void)
{
    int n;
    printf("%d", dihitcount(n));

    return 0;
}

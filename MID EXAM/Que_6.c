#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, sum;

    printf("Enter first 5 digits of the number: ");
    scanf("%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5);

    sum = d1 + d3 + d5;
    sum = sum * 3;
    sum = sum + d2 + d4;

    printf("Check digit: %d\n", (10 - sum % 10) % 10);

    return 0;
}

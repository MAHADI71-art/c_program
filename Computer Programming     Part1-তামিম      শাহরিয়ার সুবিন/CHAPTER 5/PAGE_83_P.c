#include <stdio.h>

int main (void)
{
    double farenheit, celsius;

    printf("Enter the temperature in farenheit: ");
    scanf("%lf", & farenheit);

    celsius = (farenheit - 32) * (5.0 / 9.0);

    printf("Temperature in celsius is: %lf\n", celsius);

    return 0;
}
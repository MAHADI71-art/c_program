/*4. Write a C program that reads three integers using 
a single scanf call, then prints their sum and average 
(average printed with 2 decimal places).*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int sum;
    float average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
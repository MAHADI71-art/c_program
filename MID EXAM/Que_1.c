/*Write a program that declares two int variables, 
assigns them values 15 and 4, adds them, and prints 
the result with a suitable message.
 */
#include<stdio.h>

int main(void)
{
    int a = 15;
    int b = 4;
    int sum = a + b;

    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
#include<stdio.h>

int main(void)
{
    int n, reverse = 0;

    printf("Enter a number:");
    scanf("%d", &n);

    for(;n != 0;)
    {
        reverse = reverse * 10 + n%10;
        n = n/10;
    }
    printf("The number is:%d", reverse);

    return 0;
}
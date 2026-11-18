#include<stdio.h>

int main(void)
{
    int age;
    scanf("%d", &age);

    (age >= 18) ? printf("Eligible") : printf("Not Eligible");

    return 0;
}
#include<stdio.h>
int main(void)
{
    int age;
    scanf("%d", &age);

    (age>=18) ? printf("Eligible") : printf("Not eligible");

    return 0;
}
/*
Ternary Operator:
condition ? expression1 : expression2;
*/
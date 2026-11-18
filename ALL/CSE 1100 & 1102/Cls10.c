#include<stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d", &a, &b);

    c = b;
    b = a;
    a = c;

    printf("a = %d  b = %d", a, b);
    return 0;
} 
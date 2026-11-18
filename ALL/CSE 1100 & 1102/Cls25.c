#include<stdio.h>

void main()
{
    int a, b = 0;
    scanf("%d", &a);

    for(;a != 0;)
    {
        int rem = a % 10;
        b = b * 10 + rem;

        a /= 10;
    }
    printf("%d\n", b);
}
#include <stdio.h>

int main(void)
{
    int X, Y;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X * 9 == Y * 16)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
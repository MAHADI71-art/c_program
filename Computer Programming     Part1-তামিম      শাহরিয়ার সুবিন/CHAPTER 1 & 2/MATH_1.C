#include <stdio.h>

int main(void)
{
    int x, y;

    x = 171;
    y = x;
    x = 101;

    printf("%d", y);

    return 0;
}
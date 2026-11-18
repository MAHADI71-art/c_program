#include <stdio.h>

int main(void)
{
    int n = 5;
    int i = 1;

    while (i <= 10)               // for (;i <= 10;) we can use it.
    {
        printf("%d * %d = %d\n", n, i, n*i);
        i = i+1;
    }

    return 0;
}
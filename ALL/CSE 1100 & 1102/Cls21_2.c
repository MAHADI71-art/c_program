#include <stdio.h>

void main()
{
    int N, Sum;
    scanf("%d", &N);

    Sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            Sum += i;
        }
    }
    printf("Sum = %d\n", Sum);
}
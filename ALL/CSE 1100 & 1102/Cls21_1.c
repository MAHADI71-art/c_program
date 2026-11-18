#include <stdio.h>

void main()
{
    int N, Sum;
    scanf("%d", &N);

    Sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)
        {
            Sum += i;
        }
    }
    printf("Sum = %d\n", Sum);
}
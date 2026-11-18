#include <stdio.h>

void main()
{
    int n, i, Sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
       if(i % 2 == 0)
       {
          printf("%d", i);
          Sum = Sum + i;
       }
    }

    printf(" \nSum of even numbers=%d\n", Sum);
}
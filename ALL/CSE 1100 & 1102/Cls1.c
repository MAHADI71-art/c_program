#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    printf("Enter a number=");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("odd\n");
    }
    else
    {
        printf("Even\n");
    }
    system("pause");
}
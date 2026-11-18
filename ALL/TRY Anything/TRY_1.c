#include <stdio.h>

int main(void)
{
    int A, D;
    
    scanf("%d", &A);
    scanf("%d", &D);

    if (A <= D)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
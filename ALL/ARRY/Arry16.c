// Function Reversed
#include <stdio.h>
#include <string.h>

char reverse(char A[])
{
    char B[100];
    int i = 0;
    int j = strlen(A) - 1;
    while (j >= 0)
    {
        B[i] = A[j];
        j--, i++;
    }
    B[i] = '\0';

    printf("Reversed: %s", B);
}
int main(void)
{

    char str[100];

    scanf("%s", str);
    reverse(str);

    return 0;
}

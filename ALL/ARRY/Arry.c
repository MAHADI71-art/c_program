#include <stdio.h>

// string reverse
int main(void)
{
    char A[100], B[100];
    scanf("%s", A);

    int j = strlen(A) - 1;
    int i = 0;

    while (j >= 0)
    {
        B[i] = A[j];
        j--, i++;
    }
    B[i] = '\0';

    printf("%s", B);

    return 0;
}
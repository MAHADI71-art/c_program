#include <stdio.h>
#include <string.h>

char *reverse(char A[], char B[])
{

    int i = 0;
    int j = strlen(A) - 1;

    while (j >= 0)
    {
        B[i] = A[j];
        j--, i++;
    }
    B[i] = '\0';

    return B;
}

int main(void)
{
    char A[100];
    char B[100];
    scanf("%s", A);

    printf("Reversed : %s", reverse(A, B));

    return 0;
}
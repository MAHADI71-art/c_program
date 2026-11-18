//string length

#include<stdio.h>
#include<string.h>

int main(void)
{
    char A[30];
    scanf("%s", A);

    int l = strlen(A);

    printf("%d", l);

    return 0;
}
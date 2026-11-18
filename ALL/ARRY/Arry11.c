#include <stdio.h>
#include <string.h>

int main(void)
{
    char A[20];
    scanf("%s", A);

    int N = strlen(A);
    int palindrome = 1;

    for (int i = 0; i < N / 2; i++)
    {
        if (A[i] != A[N - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
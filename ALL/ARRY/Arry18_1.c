// Sum of digit
#include <stdio.h>
#include <string.h>
int sum(int N)
{
    int sum = 0;

    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main(void)
{
    int N;
    scanf("%d", &N);
    

    printf("Sum = %d\n", sum(N));

    return 0;
}
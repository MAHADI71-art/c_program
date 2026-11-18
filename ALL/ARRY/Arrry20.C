//LCM
#include <stdio.h>

int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b)
{
    return (a / GCD(a, b)) * b;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("LCM = %d\n", LCM(a, b));

    return 0;
}
#include <stdio.h>

int main(void)
{
    int total = 5;
    printf("Step 1: total = %d\n", total);

    total = total + 3;
    printf("Step 2: total = %d\n", total);

    total = total * 2;
    printf("Step 3: total = %d\n", total);

    return 0;
}
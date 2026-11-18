/*What will be the final value of total after these
statements run? Explain step by step. 
int total = 5; total = total + 3;
total = total * 2;
*/
#include <stdio.h>

int main(void)
{
    int total = 5;
    printf("Step 1: total = %d\n", total);

    total = total + 3;
    printf("Step 2: total = %d + 3 = %d\n", total, total + 3);

    total = total * 2;
    printf("Step 3: total = %d * 2 = %d\n", total, total * 2);

    return 0;
}
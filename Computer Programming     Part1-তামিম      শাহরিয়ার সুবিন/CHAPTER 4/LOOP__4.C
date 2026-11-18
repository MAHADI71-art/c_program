#include <stdio.h>

int main(void)
{
    int n = 1;

    while(n <= 120)
        {
            printf("%d\n", n++);

            if(n > 12)
            {
                break;
            }
        }
    return 0;
}
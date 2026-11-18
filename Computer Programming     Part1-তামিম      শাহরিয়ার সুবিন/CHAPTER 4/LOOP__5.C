#include <stdio.h>
//1 থেকে 12 এর মধ্যে কেবল বেজোড় সংখ্যা গুলো করবে।
int main(void)
{
    int n = 0;

    while(n < 12)
        {
            n = n + 1;

            if (n % 2 == 0)
            {
                continue;

            }
            printf("%d\n", n);
        }
    
    return 0;
}
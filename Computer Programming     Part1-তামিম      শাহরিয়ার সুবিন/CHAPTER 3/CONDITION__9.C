//OR operator
//("|"→ একটি দাগ → Bitwise OR)
//("||" → দুটি দাগ → Logical OR)
#include <stdio.h>

int main()
{
    int num = 11;

    if(num >= 1 && num <= 10)
    /*একবার "।।" দিয়ে রান করাও। আবার ।। এর পরিবর্তে && দিয়ে রান করাও*/
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}
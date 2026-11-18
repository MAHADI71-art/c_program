#include <stdio.h>

int main(void)
{
    int x = 10;

    if(x > 0)
    {
        printf("Positive\n");
    }
    else if(x >= 10)
    {
        printf("Greater than or equal to 10\n");
    }
    else if(x == 10)
    {
        printf("Exactly 10\n");
    }

    return 0;
/*সব if → যখন প্রতিটি শর্ত আলাদাভাবে পরীক্ষা করতে হবে।
if - else if - else→যখন অনেকগুলোর মধ্যে মাত্র একটি ফলাফল চাই।*/
}
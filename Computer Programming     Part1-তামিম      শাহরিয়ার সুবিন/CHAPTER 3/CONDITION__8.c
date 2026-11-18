//AND operator ('&&')
#include <stdio.h>

int main(void)
{
    char ch ='W';

    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }
    if(ch >= 'A' && ch <= 'Z')
    /* ২য় if এর আগে  else ব্যাবহার করা উচিত। তাহলে ১ম
    if এর ভেতরের সত্য হলে আর পরের if এর কন্ডিশন পরীক্ষা করা হবে না।
     তাতে সময় বাঁচবে।*/
    {
        printf("%c is upper case\n", ch);
    }

    return 0;
    
}
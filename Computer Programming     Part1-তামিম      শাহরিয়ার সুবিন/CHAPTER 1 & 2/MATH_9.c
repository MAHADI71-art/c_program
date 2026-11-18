#include <stdio.h>

int main(void)
{
    char ch;//char একটি মাত্র অক্ষর সংরক্ষণ করতে পারে

    printf("Enter the first letter of your name: ");
    ch = getchar();// ch = getchar() এইখনে scanf("%c", &ch)এর কাজ করতিছে
    printf("The first letter of your name is: %c\n", ch);

    return 0;


}
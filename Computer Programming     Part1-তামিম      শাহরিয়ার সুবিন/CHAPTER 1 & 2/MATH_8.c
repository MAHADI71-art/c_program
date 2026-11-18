#include <stdio.h>

int main(void)
{
    char ch;//char একটি মাত্র অক্ষর সংরক্ষণ করতে পারে

    printf("Enter the first letter of your name: ");

    scanf("%c", &ch);/*%c → একটি অক্ষর ইনপুট নেবে।
                     &ch → ch-এর ঠিকানায় সেই অক্ষর সংরক্ষণ করবে*/
    printf("The first letter of your name is: %c\n", ch);

    return 0;


}
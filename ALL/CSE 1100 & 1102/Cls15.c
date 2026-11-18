#include <stdio.h>

int main(void)
{
    char ch;
    scanf("%c", &ch);

    int Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                   ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    Vowel ? printf("Vowel") : printf("Consonant");

    return 0;
}
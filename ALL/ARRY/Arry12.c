#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    printf("Enter a word: ");
    scanf("%99s", str);

    int vowel = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
    }

    printf("Total vowels: %d\n", vowel);

    return 0;
}
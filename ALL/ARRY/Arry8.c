// Word count
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("Total word : %d", count + 1);

    return 0;
}
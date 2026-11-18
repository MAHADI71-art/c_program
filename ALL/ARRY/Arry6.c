//Password Chaker
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char password[50];
    scanf("%s", password);

    int special = 0, digit = 0, upper = 0, lower = 0;
    int i;

    for (i = 0; i < strlen(password); i++)
    {
        if (isupper(password[i]))
        {
            upper = 1;
        }
        else if (islower(password[i]))
        {
            lower = 1;
        }
        else if (isdigit(password[i]))
        {
            digit = 1;
        }
        else if (!isalnum(password[i]))
        {
            special = 1;
        }
    }
    if (strlen(password) >= 8 && upper && lower && digit && special)
    {
        printf("Valid password\n");
    }
    else
    {
        printf("Invalid password\n");
    }

    return 0;
}
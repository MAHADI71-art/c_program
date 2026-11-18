// password checker
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char pass[100];
    int upper = 0, lower = 0, digit = 0, special = 0;
    int i;

    printf("Enter password: ");
    scanf("%s", pass);

    for (i = 0; pass[i] != '\0'; i++)
    {
        if (pass[i] >= 'A' && pass[i] <= 'Z')
            upper = 1;
        else if (pass[i] >= 'a' && pass[i] <= 'z')
            lower = 1;
        else if (pass[i] >= '0' && pass[i] <= '9')
            digit = 1;
        else
            special = 1;
    }

    if (strlen(pass) >= 8 && upper && lower && digit && special)
        printf("Valid password\n");
    else
        printf("Invalid password\n");

    return 0;
}

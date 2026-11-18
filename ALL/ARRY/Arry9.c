#include <stdio.h>
#include <string.h>

int main(void)
{
    char Name[3][20];

    for (int i = 0; i < 3; i++)
    {
        fgets(Name[i], sizeof(Name[i]), stdin);
    }

    printf("===============\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s", Name[i]);
    }
    return 0;
}
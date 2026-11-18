#include<stdio.h>
void main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
         printf("%c is a uppercase");
    else if(ch >= 'a' && ch <= 'z')
         printf("%c is a lowercase");
    else
        printf("Not an alphabet");          
}
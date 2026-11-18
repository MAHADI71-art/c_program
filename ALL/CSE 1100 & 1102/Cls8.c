#include <stdio.h>
int main(void)
{
    char ch;
    printf("Entar an Alphabet=");
    scanf("%c", &ch);

    if(ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U' )
        printf("Vowel");
    else if(ch =='a' || ch =='e' || ch == 'i'|| ch == 'o' || ch =='u' )
        printf("Vowel");
    else
        printf("Consonent");
    return 0;
}
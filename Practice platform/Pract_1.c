#include<stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter the age of three people:\n ");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b && a<c)
        printf("The youngest persone is %d years old.", a);
    else if(b<a && b<c)
        printf("The youngest persone is %d years old.", b);
    else if(c<a && c<b)
        printf("The youngest person is %d years old.", c);
        
    return 0;    
}
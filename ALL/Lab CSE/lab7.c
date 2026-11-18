#include<stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter 3 Number: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c)
        printf("%d is greater\n", a);
    else if (b > a && b > c)
        printf("%d is greater\n", b);
    else if (c > a && c > b)
        printf("%d is greater\n", c);

    return 0;    
}

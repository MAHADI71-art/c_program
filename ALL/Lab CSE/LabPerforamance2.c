#include<stdio.h>

int main(void)
{
    int units, bill;
    scanf("%d", &units);

    if(units <= 50)
       bill = units * 5;
    else if(units <= 100)
        bill = units * 7;
    else
        bill = units * 10;


    printf("%d", bill);
    
    return 0;
}
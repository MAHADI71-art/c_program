#include<stdio.h>

int main(void)
{
    double a, b, c, d;
    
    printf("Subject 1:");
    scanf("%lf", &a);

    printf("Subject 2:");
    scanf("%lf", &b);

    printf("Subject 3:");
    scanf("%lf", &c);

    d = (a+b+c)/3;

    if(d>= 80)
        printf("Grade A"); 
    else if (d >= 60 && d<=79)
        printf("Grade B");
    else if (d >= 40 && d <= 59)
        printf("Grade C");
    else if (d < 40){
        printf("Grade F\n");
        printf("Better luck next time");
    }
    return 0;
}
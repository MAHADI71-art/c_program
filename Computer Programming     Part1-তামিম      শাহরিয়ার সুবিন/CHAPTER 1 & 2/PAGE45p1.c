#include <stdio.h>
/* printf()-এর ভিতরে হিসাব না করে আগে অন্য ভ্যারিয়েবলে করা*/
int main(void)
{
    int num1, num2, sum, sub, mul, div;

    printf("Number 1=");
    scanf("%d", &num1);

    printf("Number 2=");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    
    printf("%d + %d = %d\n\n", num1, num2, sum);
    printf("%d - %d = %d\n\n", num1, num2, sub);
    printf("%d * %d = %d\n\n", num1, num2, mul);
    printf("%d / %d = %d\n\n", num1, num2, div);


    return 0;

}
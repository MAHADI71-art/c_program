#include <stdio.h>
/*৩য় কাজ num2=0 দিয়ে দেখা*/
int main(void)
{
   double num1, num2=0, sum, sub, mul, div;

    printf("Number 1=");
    scanf("%lf", &num1);



    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    
    printf("%lf + %lf = %lf\n", num1, num2, sum);
    printf("%lf - %lf = %lf\n", num1, num2, sub);
    printf("%lf * %lf = %lf\n", num1, num2, mul);
    printf("%lf / %lf = %lf\n", num1, num2, div);

    return 0;

}    
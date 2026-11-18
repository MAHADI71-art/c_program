#include <stdio.h>

int main()
{
    float a, b, sum; /*double(%lf) & flot(%f)
     দশমিক সংখ্যা (Float)4 Bytes প্রায় 6–7 দশমিক সংখ্যা
     বড় দশমিক সংখ্যা (Double)8 Bytes প্রায় 15–16 দশমিক সংখ্যা*/

    scanf("%f", &a);
    scanf("%f", &b);

    sum = a + b;

    printf("Sum is : %f\n", sum);

    return 0;
}
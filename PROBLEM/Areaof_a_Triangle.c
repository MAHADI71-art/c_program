#include <stdio.h>
/*Area of a Triangle
ত্রিভুজের ক্ষেত্রফল
ক্ষেত্রফল = ½ × ভূমি × উচ্চতা
Area = ½ × Base × Height (A = ½bh)*/

int main(void)
{
    double b, h, A;

    printf("Base = ");
    scanf("%lf", &b);

    printf("Height =");
    scanf("%lf", &h);

    A = 0.5 * b * h;

    printf("Area = %lf", A);

    return 0;
}
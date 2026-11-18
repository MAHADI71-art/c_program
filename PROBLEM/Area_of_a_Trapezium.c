#include <stdio.h>
/*Area of a Trapezium
ট্রাপিজিয়ামের ক্ষেত্রফল
ক্ষেত্রফল = ½ × (সমান্তরাল দুই বাহুর যোগফল) × উচ্চতা
Area = ½ × (Sum of Parallel Sides) × Height
Area = ½ × (a + b) × h*/
int main(void)
{
    double a, b, h, A;

    printf("Parallel Side 1 = ");
    scanf("%lf", &a);

    printf("Parallel Side 2 = ");
    scanf("%lf", &b);

    printf("Height = ");
    scanf("%lf", &h);

    A = 0.5 * (a + b) * h;

    printf("Area = %lf", A);

    return 0;
}
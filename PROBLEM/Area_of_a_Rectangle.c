#include <stdio.h>
/*Area of a Rectangle
আয়তক্ষেত্রের ক্ষেত্রফল	ক্ষেত্রফল = দৈর্ঘ্য × প্রস্থ
Area = Length × Width (A = l × w)*/
int main(void)
{
    double w, l, a;

    printf("Width = ");
    scanf("%lf", &w);

    printf("Length =");
    scanf("%lf", &l);

    a = w * l;

    printf("Area = %lf", a);

    return 0;
}
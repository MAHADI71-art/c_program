#include <stdio.h>

int main(void)
{
    double a1, a2, b1, b2, c1, c2, d, x, y;

    printf("a1=");
    scanf("%lf", &a1);

    printf("a2=");
    scanf("%lf", &a2);

    printf("b1=");
    scanf("%lf", &b1);

    printf("b2=");
    scanf("%lf", &b2);

    printf("c1=");
    scanf("%lf", &c1);

    printf("c2=");
    scanf("%lf", &c2);

    d= a1 * b2 - a2 * b1;

    if ((int)d == 0) // if ((int)d == 0) এইখানে d = 0.8 হলে টা 0 দেখাবে d = 1.2 = 1 দেখাবে
    /*if (fabs(d) < 1e-9)
    fabs() ঋণাত্মক চিহ্ন বাদ দেয়।
    d-এর পরম মান (Absolute Value) 1e-9 =1 × 10⁻⁹=0.000000001(d-এর মান শূন্যের খুব কাছাকাছি কিনা পরীক্ষা করো।)
    if (d == 0)
    d-এর মান ঠিক 0 কিনা তা পরীক্ষা করা হচ্ছে।*/
    {
        printf("Value of x and y can't be determind.\n");
    }
    else{
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;

        printf("x = %lf\ny = %lf", x, y);
    }

    return 0;
}
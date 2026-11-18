#include <stdio.h>
/*
Shopping Cost
কেনাকাটার মোট খরচ
মোট খরচ = পণ্যের মূল্য × পরিমাণ
Total Cost = Price × Quantity
*/
int main(void)
{
    double TC, P, Q;

    printf("Price = ");
    scanf("%lf", &P);

    printf("Quantity = ");
    scanf("%lf", &Q);

    TC = P * Q;

    printf("Total Cost = %lf", TC);

    return 0;
}
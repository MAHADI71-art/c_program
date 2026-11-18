#include <stdio.h>
/*
Electricity Bill
বিদ্যুৎ বিল
বিল = ব্যবহৃত ইউনিট × প্রতি ইউনিটের মূল্য
Bill = Units × Rate per Unit
*/
int main(void)
{
    double u, cpu, B;

    printf("Units = ");
    scanf("%lf", &u);

    printf("Cost per Unit  = ");
    scanf("%lf", &cpu);

    B = u * cpu;

    printf("Total Bill = %lf", B);

    return 0;
}
#include <stdio.h>
/*
Average Marks
গড় নম্বর
গড় = মোট নম্বর ÷ বিষয়ের সংখ্যা
Average = Total Marks / Number of Subjects
*/
int main(void)
{
    double a, b, c, d, e, A, TM ;

    printf("Physics= ");
    scanf("%lf", &a);

    printf("Chemistry = ");
    scanf("%lf", &b);

    printf("Biology =");
    scanf("%lf", &c);

    printf("Math = ");
    scanf("%lf", &d);

    printf("ICT =");
    scanf("%lf", &e);

    TM = a + b + c + d + e;
    A = TM / 5;

    printf("Average = %lf", A);

    return 0;
}

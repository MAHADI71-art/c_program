/*. Write a program that reads a student's name-initial 
(a single character) and CGPA (a decimal number), then prints
both nicely formatted with 2 digits after the decimal point. */
#include <stdio.h>

int main(void)
{
    char initial;
    float cgpa;

    printf("Enter your name initial: ");
    scanf("%c", &initial);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("\nName Initial: %c\n", initial);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}
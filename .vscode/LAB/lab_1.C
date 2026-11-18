#include<stdio.h>

struct Student{
    int id;
    double cgpa;
    char grade;
};

int main(void)
{
    struct Student s;
    scanf("%d %lf %c", &s.id, &s.cgpa, &s.grade);
    printf("id: %d\n", s.id);
    printf("cgpa: %2lf\n", s.cgpa);
    printf("grade : %c\n", s.grade);

}
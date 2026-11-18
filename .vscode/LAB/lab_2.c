#include<stdio.h>

struct Employee{
    int id;
    char Name[100];
    int age;
    int Salary;
};

int main(void)
{
    struct Employee s;
    scanf("%d %s %d %d",&s.id, &s.Name, &s.age, &s.Salary);
    printf("id: %d\n",s.id);
    printf("Name: %s\n",s.Name);
    printf("age: %d\n",s.age);
    printf("Salary: %d\n",s.Salary);
}
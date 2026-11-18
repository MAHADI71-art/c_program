#include<stdio.h>
struct student{
    int id;
    double cgpa;
    char Name[30];
};

int main()
{
    struct student s[3] ;

    for(int i = 0; i < 3; i++){
        scanf("%d %lf %[^\n]", &s[i].id, &s[i].cgpa, &s[i].Name);
    }
    for(int i = 0; i< 3; i++){
        printf("ID: %d\n", s[i].id);
        printf("cgpa: %2lf\n", s[i].cgpa);
        printf("Nmare: %s\n", s[i].Name);
    }
}

#include<stdio.h>

int main(void)
{
    int marks;

    printf("Enter your marks=");
    scanf("%d", &marks);

    if(marks >= 80 && marks <= 100){
        printf("A");
    }
    else if(marks >= 70 && marks <=79){
        printf("B\n");
    }
    else if(marks >= 60 && marks <= 69){
        printf("C\n");
    }
    else if(marks >= 50 && marks <= 59){
        printf("D\n");
    }
    else if( marks >= 0 && marks <= 50){
        printf("F\n");
    }
    return 0;
}
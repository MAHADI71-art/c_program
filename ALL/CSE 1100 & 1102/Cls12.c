#include<stdio.h>

int main(void)
{
    int grade;
    scanf("%d", &grade);

    if(grade == 4){
        printf("Excellent");
    }
    else if(grade == 3){
        printf("Good");
    }
    else if(grade == 2){
        printf("Average");
    }
    else if(grade == 1){
        printf("Poor");
    }
    else{
        printf("Fail\nBetter luck next time");
    }
    return 0;

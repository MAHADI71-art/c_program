#include<stdio.h>

void main()
{
    int n;
    printf("Year:");
    scanf("%d", &n);

    if(n % 400 == 0)
          printf("Leap Year");
    else if(n % 100 == 0)
          printf("Not Leap Year");
    else if(n%4 == 0)
          printf("Leap Year");
    else
          printf("Not Leap Year");
}
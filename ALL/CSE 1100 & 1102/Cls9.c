#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number=");
    scanf("%d", &n);

    if(n>0)
       printf("Positive\n");
    else if(n<0)
       printf("Negative\n");
    else if("n == 0")
       printf("Zero");
 
    
   return 0;
}
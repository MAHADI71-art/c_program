#include<stdio.h>

int main(void)
{
    int N;
    
    scanf("%d", &N);

    if(N >= 1 && N <= 100)
         printf("Within Range");
    else
        printf("Out of Range");
        
    return 0;    
}
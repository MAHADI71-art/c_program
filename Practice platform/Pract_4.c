#include<stdio.h>

int main(void)
{
    int n, t, reverse=0;

    printf("Enter a number:");
    scanf("%d", &n);

    t = n;

    for(;n != 0;)
    {
        reverse = reverse * 10 + n%10;
        n = n/10;
    }
    if (t < 0){
        printf("%d is not a palimdom", t);
    }
       
    else if(reverse == t){
        printf("%d is a palimdom", t);
    }
        
    else{
        printf("%d is not a palimdom", t);
    }   
    return 0;    
}



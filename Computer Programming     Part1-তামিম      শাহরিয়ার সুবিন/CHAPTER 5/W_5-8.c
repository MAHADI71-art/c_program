#include <stdio.h>

int main(void)
{
    int a, b, x, gcd;

    scanf("%d %d", &a, &b);

    if (a < b){
        x = a;
    }
    else {
        x = b;
    } 
    for(; x >= 1; x--) {
        if ( a % x == 0 && b % x == 0){
            gcd = x;
            break;

        }
    }

    printf("GCD is %d\n", gcd);
  //GCD = Greatest Common Divisor(গসাগু)
    return 0;
}
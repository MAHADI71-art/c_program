#include <stdio.h>

int main(void)
{ 
    int a = 50 , b = 70 , c = 60 , d = 80, sum;
    int x = 50.88, y = 60.43, z = 40.67, value;

    
    sum = a + b + c + d;
    value = x + y + z;

    
    printf("%d + %d + %d + %d = %d\n", a, b, c, d, sum);
    printf("%d + %d + %d  = %d", x, y, z, value);
    
    
    return 0;
}
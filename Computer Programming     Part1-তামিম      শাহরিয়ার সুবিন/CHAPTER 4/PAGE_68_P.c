#include <stdio.h>

int main(void)
{
    int n, i;

    for(n = 1; n <= 20; n=n+1)
 {
    int m = 0;

    for(i = 1; i <= 10; i=i+1)
    {
        m = m + n;
        printf("%d * %d = %d\n", n, i, m);
    }
 }

    return 0;
}
/*for loop এর ভিতরে আর একটি for loop, যাকে নেস্টেড লুপ(nested loop) বলে*/
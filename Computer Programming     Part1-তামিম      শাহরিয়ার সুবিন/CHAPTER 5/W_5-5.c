#include <stdio.h>
/*সমান্তর ধারার প্রথম n টি স্বাভাবিক সংখ্যার যোগফলের সূত্র হলো:
S= n(n+1)/2
এখানে,
S = যোগফল
n = শেষ স্বাভাবিক সংখ্যা*/
int main(void)
{
    int n, sum;
    
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;

    printf("Summation is %d\n", sum);

    return 0;
}
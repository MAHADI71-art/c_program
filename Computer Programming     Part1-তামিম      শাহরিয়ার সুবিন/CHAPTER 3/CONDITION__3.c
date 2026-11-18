#include <stdio.h>

int main(void)
{
    int n = 10;

    if(n < 0)
    {
        printf("The number is positive\n");
    }
    else if (n > 0)
    {
        printf("The number is negative\n");
    }
    else if (n == 0)
    /*
     একবার n = 0 দাও কোড রান করাও
     এবং if (n == 0) মুছে
     else if (n == 0) এর পরিবর্তে
     else দাও এবং কোড রান করাও। 
    */
    {
        printf("The number is zero!\n");
    }
    
    return 0;

}    
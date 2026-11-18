#include <stdio.h>
//ভাগশেষ = ভাজ্য − (ভাগফল × ভাজক)
/*
ভাজ্য (Dividend) = যে সংখ্যাকে ভাগ করা হয়।
ভাজক (Divisor) = যে সংখ্যা দিয়ে ভাগ করা হয়।
ভাগফল (Quotient) = ভাগ করার পরে যে পূর্ণসংখ্যা পাওয়া যায়।
ভাগশেষ (Remainder) = যা অবশিষ্ট থাকে।
*/
int main(void)
{
    int Dividend, Divisor, Quotient, Remainder;
    

    printf("Dividend:");
    scanf("%d", &Dividend);

    printf("Divisor:");
    scanf("%d", &Divisor);

   Quotient = Dividend / Divisor;
   Remainder = Dividend - (Quotient * Divisor);
    
    printf("Remainder = %d", Remainder);

    return 0;
}
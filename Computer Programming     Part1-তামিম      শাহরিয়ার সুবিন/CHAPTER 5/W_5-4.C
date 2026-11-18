#include <stdio.h>
// সহজ-সরল ঋণের
int main(void)
{
    double loan_amount, interest_rate, numbers_of_years, total_amount, monthly_amount;

    printf("Enter the loan amount:");
    scanf("%lf", &loan_amount);

    printf("Enter the interest amount:");
    scanf("%lf", &interest_rate);

    printf("Enter the number of years:");
    scanf("%lf", &numbers_of_years);

    total_amount = loan_amount + (loan_amount * interest_rate * numbers_of_years) / 100;

    monthly_amount = total_amount / (numbers_of_years * 12);

    printf("Total amount: %lf\n", total_amount);
    printf("Monthly amount: %lf", monthly_amount);

    return 0;
}
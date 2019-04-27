#include <stdio.h>
int main ()
{
    double loan_amount, interest_rate, number_of_years, total_amount, monthly_amount;
    printf("Enter the loan amount: ");
    scanf("%lf", &loan_amount);
    printf("Enter the interest rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter the number of years: ");
    scanf("%lf", &number_of_years);
    total_amount = loan_amount + loan_amount * interest_rate * number_of_years / 100.00;
    monthly_amount = total_amount /(number_of_years * 12);
    printf("total amount = %.2lf, monthly_amount = %.2lf", total_amount, monthly_amount);

    return 0;
}

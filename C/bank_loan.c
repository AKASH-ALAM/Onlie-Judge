#include <stdio.h>
int main(){
    double loan_amount,interest_rate,number_of_year,total_amount,monthly_amount;
    printf("Enter the Amount of Loan: ");
    scanf("%lf",&loan_amount);
    printf("Enter Interest Rate: ");
    scanf("%lf",&interest_rate);
    printf("Enter the Number of Year: ");
    scanf("%lf",&number_of_year);
    total_amount = loan_amount + loan_amount * interest_rate * number_of_year / 100.00;
    monthly_amount = total_amount / (number_of_year * 12);
    printf("Total Amount with Interest : %0.2lf\n",total_amount);
    printf("Monthly Amount with Interest : %0.2lf\n",monthly_amount);
    return 0;
}

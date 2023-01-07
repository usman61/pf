#include<stdio.h>
int main()
{
	int loan_amount, monthly_payment, interest_per_month, sum;
    float interest_rate_per_year, interest_rate_per_month, months = 0;  
	 	
	printf("Enter the loan amount:");
	scanf("%d", &loan_amount);
	
	printf("Enter the interest rate per year %%:");
	scanf("%f", &interest_rate_per_year);
	
	printf("Enter the monthly payment:");
	scanf("%d", &monthly_payment);

	interest_rate_per_month = interest_rate_per_year / 12;

    while (loan_amount > 0)
    {        
    	interest_per_month= ( interest_rate_per_month / 100 ) * loan_amount;
        sum = monthly_payment - interest_per_month;
        loan_amount = loan_amount - sum;
        months++;
    }
    printf(" The Loan will be paid after %f years.\n", months);
    return 0;
}
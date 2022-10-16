#include <stdio.h> 

void resBill(float meal_price);  
int main ()  
{
    
    float meal_price;
    printf("Enter Meal Price: ");
    scanf("%f",&meal_price);

    resBill(meal_price);

   
    return 0;
}  
void resBill(float meal_price)  
{
    float tax=meal_price*0.0475;
	float tip=(tax+meal_price)*0.1;
	float total=meal_price+tax+tip;

	printf("Meal Price: %.3f", meal_price);
	printf("\nTax: %.3f", tax);
	printf("\nTip: %.3f", tip);
	printf("\nTotal Price: %.3f\n", total);

}  
#include <stdio.h>
int dicountedValue(int price);  
int main()
{
    int price;
    printf("Please enter your total purchase value:");
    scanf("%d",&price);
    price = dicountedValue(price);
    printf("The total purchase value after discount is: %d\n",price);
  
  
}
int dicountedValue(int price){
    if (price > 2000) {
    printf("Discount is applicable\n");
    price = price - price*.10 ;
    }
    else{
        printf("Discount is not applicable on amount less than 2000\n");
    }
    return price;
}

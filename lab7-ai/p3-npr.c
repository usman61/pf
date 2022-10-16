


#include <stdio.h>
int dicountedValue(int price);  
int main()
{
   int n,r,npr,numerator=1,denominator=1;
   printf("Enter n: ");
   scanf("%d",&n);
   printf("Enter r: ");
   scanf("%d",&r);


for(int i=2; i<=n; i++){
numerator=numerator * i;
} 
for(int i=2; i<=(n-r); i++){
denominator=denominator * i;
}
npr = numerator/denominator; 
printf("npr for n=%d and r = %d is %d\n",n,r,npr);
       
  
}

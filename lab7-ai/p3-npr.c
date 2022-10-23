#include <stdio.h>
int factorial(int value){
   int fact =1;
   for (int i=value;i>=2; i--){
      fact*=i;
   }
   return fact;
}  
int main()
{
   int n,r,npr,numerator=1,denominator=1;
   printf("Enter n: ");
   scanf("%d",&n);
   printf("Enter r: ");
   scanf("%d",&r);


numerator = factorial(n);
denominator = factorial(n-r);

npr = numerator/denominator; 
printf("npr for n=%d and r = %d is %d\n",n,r,npr);
        
}

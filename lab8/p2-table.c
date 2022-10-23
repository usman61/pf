#include <stdio.h>
int dicountedValue(int price);  
int main()
{
   int no;
   printf("Enter a no: ");
   scanf("%d",&no);

   for(int i=1; i<=10; i++){
    printf("%d * %d  = %d\n",no,i,no*i);
   } 
       
  
}

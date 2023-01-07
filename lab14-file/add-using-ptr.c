#include <stdio.h>
int main()
{
   int fno, sno, *ptr1, *ptr2, sum;
   
   printf("\nPointer : Add two numbers :\n"); 
   printf("--------------------------------\n");   
 

   ptr1 = &fno;
   ptr2 = &sno;

   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2);  
 
   sum = *ptr1 + *ptr2;
 
   printf(" The sum of the entered numbers is : %d\n\n",sum);
 
   return 0;
}
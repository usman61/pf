// C program to illustrate nested-if statement
#include <stdio.h>
int main()
{
   int i = 10;
 
   if (i > 0) {
       // Nested - if statement
       // Will only be executed if statement above
       // is true
       if (i < 15)
           printf("i is smaller than 15\n");
       else
           printf("i is greater than 15\n");
   }
   else
      printf("i is smaller than 0\n");
 
   return 0;
}


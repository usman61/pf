#include<stdio.h>  
void sum(int a, int b);  
int main()  
{  
  sum(4,3);
  
  sum(5,8);
  sum(2,7);

  return 0;
 
}  
void sum(int a, int b)  
{  
    printf("The sum is %d\n",a+b);      
}  

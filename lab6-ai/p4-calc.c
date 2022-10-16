// C program to illustrate If statement
#include <stdio.h>
int dicountedValue(int price);  
int main()
{
    int no1,no2,ans;
    char opt;
   printf("Enter Operation (+,-,*,/):");
    scanf("%c",&opt);
    printf("Enter first number:");
    scanf("%d",&no1);
    printf("Enter second number:");
    scanf("%d",&no2);
    // getchar();

     
    

    
    
    if(opt=='+'){

    ans = no1 + no2;
    printf("Addtion :%d\n",ans);
    }
    else if (opt=='-')
    printf("Subtraction :%d\n",(no1-no2));
    else if (opt=='*')
    printf("Product :%d\n",no1*no2);
    else if (opt=='/')
    printf("Division :%d\n",no1/no2);
    
    // printf("Outside if else ");

  
  
}

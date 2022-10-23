// C program to illustrate If statement
#include <stdio.h>
int main()
{
    int no1,no2,ans,op;
    char exit='n',opt;

    do
    {

    printf("Enter first number:");
    scanf("%d",&no1);
    printf("Enter second number:");
    scanf("%d",&no2);
    // getchar();
    printf("For Addition press 1\n");
    printf("For Subtraction press 2\n");
    printf("For Multiplication press 3\n");
    printf("For Division press 4\n");
    printf("Enter Operation (1,2,3,4):");
    scanf("%d",&op);
    if(op==1){

    ans = no1 + no2;
    printf("Addtion :%d\n",ans);
    }
    else if (op==2)
    printf("Subtraction :%d\n",(no1-no2));
    else if (op==3)
    printf("Product :%d\n",no1*no2);
    else if (op==4)
    printf("Division :%d\n",no1/no2);
   
    


    printf("do you want to continue (y,n):");
    scanf("\n%c",&exit);
       
    } while (exit!='n');
    
  
  
}

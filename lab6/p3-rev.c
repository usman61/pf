#include <stdio.h> 

int reverse(int no);  
int main ()  
{
    
    int no=123;
    printf("Enter a 3 digit number: ");
    scanf("%d",&no);

    int res = reverse(no);

   
    printf("Reverse %d\n", res);
    return 0;
}  
int reverse(int no)  
{
    int reverse;  
    int num3 = no%10;
         no = no/10;
    int num2 = no%10;
         no = no/10;
    int num1 = no%10;    

    // int num1=no/100;
    // int num2=no/10%10;
    // int num3=no%10;
    
    reverse= 100*num3+10*num2+num1;

    return reverse;


}  
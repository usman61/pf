#include<stdio.h>  
int sum(int a, int b);  
int main()  
{  
    int a=3,b=4,result;   
    
    printf("Enter a");
    scanf("%d",&a);
    
    result = sum(a,b);  
    printf("The sum is : %d\n",result); 
    return 0;
}  

int sum(int x, int y)  
{  
   int temp = x +y;
    return temp;  
    
}  








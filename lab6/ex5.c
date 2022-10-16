#include <stdio.h> 

void function1()  
{  
    printf("Hello in function 1\n");  
}  

int main ()  
{  
    printf("Before Function Call\n");
    function1(); 
    printf("After Function Call\n"); 
    return 0;
}  

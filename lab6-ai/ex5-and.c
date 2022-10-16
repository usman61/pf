// program that grant access to children aged between 8 - 12
#include <stdio.h>
int main()
{

    int age = 9;
    
    if(age>=8 && age<=12){
        printf("You are allowed Welcome!\n");
    }
    else{
        printf("Sorry! You are not allowed. Bye !\n");

    }
    
    return 0;
}

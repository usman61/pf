#include <stdio.h>
int main()
{
    float gpa;
    printf("Enter you GPA: ");
    scanf("%f",&gpa);


    if(gpa>3.5){
        printf("I would give you a passing treat\n");
    }
    else{
        printf("No Treat\n");

    }
    
    return 0;
}

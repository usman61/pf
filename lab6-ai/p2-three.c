#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter first integer x:");
    scanf("%d",&x);
    printf("Enter second integer y:");
    scanf("%d",&y);
    printf("Enter third integer z:");
    scanf("%d",&z);
    
    if(x>y && x>z)
    printf("First integer %d is largest among three",x);
    else if (y>x && y>z)
    printf("Second integer %d is largest among three",y);
    else
    printf("Third integer %d is largest among three",z);

  
    return 0;
}

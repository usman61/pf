#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter first integer x:");
    scanf("%d",&x);
    printf("Enter second integer y:");
    scanf("%d",&y);
    
    if(x<y)
    printf("First integer %d is smaller than second %d",x,y);
    else
    printf("Second integer %d is smaller than First %d",y,x);
    return 0;
}

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter an integer x:");
    scanf("%d",&x);
    
    if(x%5)
    printf("%d is not a multiple of 5",x);
    else
    printf("%d is a multiple of 5",x);
    return 0;
}

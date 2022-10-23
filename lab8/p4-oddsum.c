/**
 * C program to print day of week using switch case
 */

#include <stdio.h>

int main()
{
    int n,sum=0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2)
        sum+=i;
    }
    printf("Sum of odd numbers from 1 till %d = %d\n",n,sum);
   
    return 0;
}
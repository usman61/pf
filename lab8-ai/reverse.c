// C program to reverse a number
#include <stdio.h>
int reverse(int n){
    int temp,rev=0;
    while (n>0){
        temp = n%10;
        n/=10;
        rev = rev*10 + temp;
    }
    return rev;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse of %d is %d\n",n,reverse(n));

	return 0;
}



// Positive integers 1,2,3...n are known as natural numbers
#include <stdio.h>
int sumtill_n(int n){
if(n<1)
return 0;
else
return n+sumtill_n(n-1);
}
int main()
{
int n,sum=0;
printf("Enter a positive integer: ");
scanf("%d",&n);
sum =sumtill_n(n);
printf("Sum: %d\n",sum);
return 0;

}

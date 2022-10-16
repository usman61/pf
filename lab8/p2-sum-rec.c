#include <stdio.h>
int sumtill_n(int n){
    if(n<=0)
    return n;
    else
    return n+sumtill_n(n-1);
}
int main()
{
   int n,sum=0;
   printf("Enter n: ");
   scanf("%d",&n);
   sum =  sumtill_n(n);  
   
   printf("Sum: %d\n",sum);


  
}

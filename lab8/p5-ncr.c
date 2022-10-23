#include <stdio.h>
int factorial(int value);
int get_ncr(int n,int r);
int main()
{
   int n,r,ncr;
   printf("Enter n: ");
   scanf("%d",&n);
   printf("Enter r: ");
   scanf("%d",&r);


ncr = get_ncr(n,r); 
printf("ncr for n=%d and r = %d is %d\n",n,r,ncr);
       
  
}

int factorial(int value){
   int fact =1;
   for (int i=value;i>1; i--){
      fact*=i;
   }
   return fact;
} 
// this ftn would calc ncr it takes two argument n & r

int get_ncr(int n,int r){
   int ncr,num,denom,n_r;
   n_r = n-r;
   num = factorial(n);
   denom = factorial(r);
   denom = denom * factorial(n_r);
   ncr = num/denom;
   return ncr;
}       

#include <stdio.h>
int dicountedValue(int price);  
int main()
{
   int n,r,ncr,r_fact=1,numerator=1,denominator,n_r=1;
   printf("Enter n: ");
   scanf("%d",&n);
   printf("Enter r: ");
   scanf("%d",&r);


for(int i=2; i<=n; i++){
numerator=numerator * i;
} 
for(int i=2; i<=(n-r); i++){
n_r=n_r * i;
}
for(int i=2; i<=(r); i++){
r_fact=r_fact * i;
}
denominator = n_r * r_fact;
ncr = numerator/denominator; 
printf("ncr for n=%d and r = %d is %d\n",n,r,ncr);
       
  
}

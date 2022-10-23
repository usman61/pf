#include <stdio.h>
int main()
{
   int n=1,count=0,sum=0;
   
   while(count<10){
      if (n%3==0 && n%5==0){
   printf("Number: %d\n",n);
        sum+=n ;
      count++;
      }
      

   n++;   
}
   printf("Count: %d\n",count);
   printf("Sum: %d\n",sum);


  
}

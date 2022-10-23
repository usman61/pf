#include <stdio.h>
void factors(int no);  
int main()
{
   int no;
   printf("Enter a no: ");
   scanf("%d",&no);
   factors(no); 
}
void factors(int no){
   for(int i=2; i<=no/2; i++){
      if(no%i==0)
      printf(" %d ",i);
   }
   printf("\n");
}
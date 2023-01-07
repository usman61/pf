#include <stdio.h>
int main() {
   int rows = 10;
   for (int i=1; i<=rows; i++){
      for (int j=rows; j>i; j--){
         printf(" ");
      }
      for(int k=1; k<=2*i-1; k++)
        printf("@");

      printf("\n");
      
      }
      
      
   


return 0;
}
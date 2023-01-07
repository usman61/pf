#include <stdio.h>
int main() {
   int rows = 10;
   for (int i=1; i<=rows; i++){
      if(i<=5)
      for (int j=1; j<=i; j++){
         printf("#");
      }
      else{

        for(int k=rows-1; k>=i; k--){
         printf("#");
      }

      }
      
      printf("\n");
   }


return 0;
}
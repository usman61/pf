#include <stdio.h>

void pattern(int rows,char symbol){

   int i, j,k;
   for (i=0; i<rows; i++){
    if(i<=4){
     
        for(j=0; j<=i; j++){
        printf("%c",symbol);
        }
    printf("\n");
    }
    else{

        for(k=rows-i;k>0;k--){
        printf("%c",symbol);
        }
         printf("\n");

    }

   
   }


}

int main() {

    char sym;
    printf("Enter the symbol");
    scanf("%c",&sym);
    pattern(9,sym);
   
   return 0;
}

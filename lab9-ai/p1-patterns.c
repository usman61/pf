#include <stdio.h>
void pattern1(int rows){



   int i, j,k;
   for (i=0; i<rows; i++){
    for(j=0; j<i; j++){
        printf(" ");
    }
    
    for(k=rows;k>i;k--){
        printf("*");
    }
    
    printf("\n");
   }


}



void pattern2(int rows){

   int i, j,k;
   for (i=0; i<rows; i++){
    for(j=rows-1; j>i; j--){
        printf(" ");
    }
    for(k=0;k<=i;k++){
        printf("*");
    }
    printf("\n");
   }


}

int main() {
    printf("Pattern 1\n");
    pattern1(5);
        printf("\nPattern 2");
    printf("\n\n");
    pattern2(5);
   return 0;
}

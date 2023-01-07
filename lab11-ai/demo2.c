#include <stdio.h>
 
int getMissingNumber(int *array, int size) {
    int i, sum = 0, n = size + 1; 
    for(i = 0; i < size; i++){
        sum = sum + array[i];
    }
   
    return (n*(n+1))/2 - sum;
}
 
int main(){
    int array[8];
    printf("Enter Numbers");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&array[i]);
    }
  
    printf("Missing Number : %d \n", getMissingNumber(array, 8));
 
    return 0;
}
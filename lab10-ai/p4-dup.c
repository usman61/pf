#include <stdio.h>

int is_exist(int arr[],int key,int size){
    for(int i=0; i<size; i++){
        if(key == arr[i])
        return 1;
    }
return 0;
}

int main() {

  int size=10,count=0;
  int arr[size], i,read;
  
  printf("Enter numbers---->: ");
  for(i=0; i < size; ++i) {
    scanf("%d", &read);

   //printf("Read %d\n",read); 
   if(read<10 || read>100){
    printf("Please enter the number in range(10-100):");
    continue;
   }
    
    if(!is_exist(arr,read,count)){
        arr[count] = read;
        count++;
    }
    else
    printf("%d already exist\n",read);       
  }
  printf("Unique Elements :");
  for(int i=0; i<count; i++)
  printf("%d ",arr[i]);

  printf("\n");

 
  return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    int arr[60];
    for(i=0; i<20; i++){
        arr[i] =  i*i;
      
      
      
      
        j=i+20;
        arr[j] =  j*j*j;
        k=i+40;
        arr[k] = i + k; 
    }



    for(int i=0; i<60; i++){
        printf("%d\t",arr[i]);
       
        if((i+1)%10==0)
        printf("\n");
    }
    

    return 0;
}



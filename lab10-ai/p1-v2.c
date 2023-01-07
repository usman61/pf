#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],min,max,sum=0,even=0,odd=0,odd_indices=0;
    float avg=0;
    printf("Enter 10 elements in array\n");
    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }


    
    min = max = arr[0];
    for(int i=0; i<10; i++){
        if(min>arr[i])
        min = arr[i];
        if(max<arr[i])
        max = arr[i];
        sum = sum+arr[i];

        if(arr[i]%2)
        odd++;
        else
        even++;

    }
    avg= sum/10.0;

    printf("Minimum value in array is %d\n",min);
    printf("Miximum value in array is %d\n",max);
    printf("Average of array is %f\n",avg);
    printf("Value at index 2  is %d\n",arr[2]);
    printf("Last Element of array is %d\n",arr[9]); 
    printf("Odd Element Count %d\n",odd);
    printf("Even Element Count %d\n",even);
    // displaying array in reverse order
    printf("Array in reverse Order\n");
    for(int i=9; i>=0; i--)
    printf("%d  ",arr[i]);   

    printf("\n");

    return 0;
}

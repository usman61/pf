#include <stdio.h>
int main()
{
    int arr[7];
    printf("Enter elements in array\n");
    for(int i=0; i<7; i++)
    scanf("%d",&arr[i]);


    int min = arr[0];
    int second_min = arr[1];
    for(int i=0; i<7; i++){
        if(arr[i]<min){
            second_min = min;
            min = arr[i];
        }
        else if(arr[i]<second_min && arr[i] != min){
            second_min = arr[i];
        }
    }
    printf("Minimum %d\nSecond Min %d\n",min,second_min);
    return 0;
}

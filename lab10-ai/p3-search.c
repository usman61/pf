#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,4,5,6,7,8,4},search,count=0;
    printf("Enter element to search in array\n");
    printf("[");
    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
    printf("]:");
    scanf("%d",&search);
    for(int i=0; i<10; i++){
        if(search == arr[i])
        count++;
    }
    if(count>0)
    printf("Element %d found %d times\n",search,count);
    else
    printf("Element Not Found\n");


    return 0;
}

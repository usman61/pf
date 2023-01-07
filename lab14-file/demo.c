#include <stdio.h>
int main()
{
    int A[10];
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Value at index 2 : %d",A[2]);
    printf("\nLast element is %d",A[9]);
    int counte=0;
    int counto=0;
    for(int i=0 ; i<10 ; i++)
    {
    if(A[i]%2==0)
    {counte++;}
    else
    {counto++;}
    }
    printf("\nEven elements : %d",counte);
    printf("\nOdd elements : %d",counto);
    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<10 ; j++)
        {
            if(A[j]>A[j+1])
            {
            int temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            }
        }
    }
    printf("\nMinimum is : %d",A[0]);
    printf("\nMaximum is : %d",A[9]);
    int count=0;
    for(int i=0 ; i<10 ; i++)
    {
      count=count+A[i];
    }
    float average=count/10;
    printf("\nAverage is : %f",average);
    
}
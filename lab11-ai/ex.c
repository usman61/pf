#include <stdio.h>
int main()
{
int a[7],min,secondmin,i;
        for (i=0;i<7;i++)
        {
            printf("enter value for array block %d= ",i+1 );
            scanf("%d",&a[i]);
        }
min=a[0];
secondmin=a[0];
    for (i=0;i<7;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    for (i=0;i<7;i++)
    {
        if (a[i] != min && a[i]<secondmin)
        {
            secondmin=a[i];
        }
    }
printf("second min. value in array: %d",secondmin);
return 0;
}

















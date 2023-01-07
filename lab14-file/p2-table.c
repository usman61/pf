#include<stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr,table,limit,*ptr2;
    
    ptr=&table;
    ptr2 = &limit;

    printf("Enter table: ");
    scanf("%d",ptr);
    printf("Enter limit: ");
    scanf("%d",ptr2);

    for(int i=1; i<=*ptr2; i++){
        printf("%d * %d = %d\n",*ptr,i,*ptr*i);
    }
    return 0;
}

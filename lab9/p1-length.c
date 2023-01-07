#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,count=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(n>0){
        n/=10;
        count++;
    }
    printf("Length :%d\n",count);
    return 0;
}

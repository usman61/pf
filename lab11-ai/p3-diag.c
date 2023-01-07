#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[3][3]={{1,2,5},{3,4,7},{6,3,8}};
    int sum=0;
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            if(i==j)
            sum+=arr[i][j];
        }
    }
    printf("Sum is %d",sum);

    return 0;
}

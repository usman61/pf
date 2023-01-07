#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[3][4];
    //  arr[3][4] = {{1,2,3,4},{5,6,79,8},{9,10,11,12}};
    int max = arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(max<arr[i][j])
            max = arr[i][j];
        }
    }
    printf("Largest Value is %d",max);

    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int trans[2][2];
    int arr[2][2] = {{1,2},{3,4}};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            trans[j][i] = arr[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}

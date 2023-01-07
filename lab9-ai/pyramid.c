#include <stdio.h>
int main(int argc, char const *argv[])
{
    int rows=5;
    for(int i=1; i<=rows; i++){
        for(int j=i; j<=rows; j++)
        printf(" ");

        for(int k=1; k<=(i*2-1); k++)
        printf("*");

        printf("\n");
    }
    return 0;
}

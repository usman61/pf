#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no=20,count=0,i=1;

    while(count<20){

        if(no%i){
            count=0;
            no++;
            i=0;
        }
        else{
            count++;
        }
        i++;
    }
    printf("Number %d",no);
    return 0;
}

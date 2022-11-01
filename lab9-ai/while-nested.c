#include<stdio.h>
int main(int argc, char const *argv[])
{
    int week=3,days=7;
    int i=1,j;
    while(i<=3){
        j=0;
        printf("Week %d\n",i);

        while(j<8){
            printf("\tDay %d\n",j);
            j++;
        }
        i++;
    }

    return 0;
}

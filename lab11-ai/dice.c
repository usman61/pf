#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int dice1,dice2,i,rolls=1000,freq[11]={0};
        srand(time(NULL));
    for (i=0; i<rolls; i++){
        dice1 = 1 + rand()%6;
        dice2 = 1 + rand()%6;
        freq[dice1+dice2-2]++;
    }
    printf("Combination\tFrequencies\n");
    for(i=0; i<11; i++){
        printf("%d\t\t%d\n",i+2,freq[i]);
    }
    return 0;
}

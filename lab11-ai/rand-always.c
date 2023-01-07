#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    
    int no = (rand()%6) + 1;
        
      printf("Random Number %d \n",no);
    
    return 0;
}

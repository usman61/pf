#include <stdio.h>
int main(int argc, char const *argv[])
{
    float towna_pop,townb_pop,growtha,growthb;
    int years = 0;
    
    printf("Enter the population and growth rate of Town A: ");
    scanf("%f",&towna_pop);
    scanf("%f",&growtha);
    printf("Enter the population and growth rate of Town B: ");
    scanf("%f",&townb_pop);
    scanf("%f",&growthb);
   if (towna_pop < townb_pop && growtha > growthb)
    {
    while(towna_pop<townb_pop){
        
        towna_pop+=towna_pop*(growtha/100);
        townb_pop+=townb_pop*(growthb/100);
        years++;
        
    }
    printf("Town A will surpass Town B in population after %d years.\n",years);
    printf("The final population of Town A is: %.2f.\n",towna_pop);
    printf("The final population of Town B is: %.2f.\n",townb_pop);

    }
    else{
        printf("Invalid Data");
    }

    return 0;
}

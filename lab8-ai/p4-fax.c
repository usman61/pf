#include <stdio.h>

float fax_cost(int pages){

float cost,add,service=3.0;
if (pages>10)
{
    add = pages-10;
    cost = add*.10;
    cost = cost + (pages-add)*.20;

}
else
{
    cost = pages*.20;
}
cost = cost + service;
return cost;
}

int main()
{
    int pages;
    float cost;
    printf("Enter number of pages to be faxed:");
    scanf("%d",&pages);
    cost = fax_cost(pages);
    printf("Cost : %.2f",cost);
    

    printf("Hellow rold");
}

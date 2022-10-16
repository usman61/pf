#include<stdio.h>
void unitCosnumed(int x,int y);
int main()
{
        int X,Y;
	printf("Enter the Units Consumed till September: ");
	scanf("%d",&X);
	printf("Enter the Units Consumed till October: ");
	scanf("%d",&Y);
	
	unitCosnumed(X,Y);
	
	return 0;
}
void unitCosnumed(int x,int y){
	
	int units_consumed= y-x;
	int bill=units_consumed*5;
        printf("------------------------------------\n"); 
	printf("Units consumed in October: %d", units_consumed);
	printf("\nTotal bill for October: %d\n", bill);
	printf("------------------------------------\n"); 
}


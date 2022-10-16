#include <stdio.h> 

int convertToSeconds(int days,int hr,int min);  
int main ()  
{
    int days,hr,min,sec; 
    printf("------------------------------------\n"); 
    printf("Enter days: ");
    scanf("%d",&days);
    printf("Enter Hours: ");
    scanf("%d",&hr);
    printf("Enter Minutes: ");
    scanf("%d",&min);
    printf("------------------------------------\n");
    sec = convertToSeconds(days,hr,min);

    printf("Seconds : %d\n",sec);
    return 0;
}  
int convertToSeconds(int days,int hr,int min)  
{  
    int result = (days*86400) + (hr*3600) + (min*60);
    return result;
}  
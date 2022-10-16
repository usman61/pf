#include <stdio.h> 

int getThirdAngle(int angle1,int angle2); 
int main ()  
{
    int angle1,angle2,angle3; 
    printf("------------------------------------\n"); 
    printf("Input the 1st angle of Triangle: ");
    scanf("%d",&angle1);
    printf("Input the 2st angle of Triangle: ");
    scanf("%d",&angle2);
    printf("------------------------------------\n");
    angle3 = getThirdAngle(angle1,angle2);

    printf("The 3rd angle of Triangle is : %d\n",angle3);
    return 0;
}  
int getThirdAngle(int angle1,int angle2)  
{  
    int angle3 = 180 - angle1- angle2;
    return angle3;
}  
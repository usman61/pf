#include <stdio.h> 

float sphereVolume(float r);  
int main ()  
{
    float radius,volume;
   
    printf("------------------------------------\n"); 
    printf("Enter the radius of sphere: ");
    scanf("%f",&radius);
     printf("------------------------------------\n"); 
    volume = sphereVolume(radius);
    printf("The Volume of a sphere is : %f\n",volume);
    return 0;
}  
float sphereVolume(float r)  
{  
    const float pi = 3.1415;  
   
    return (4.0/3.0)*pi*(r*r*r);
}  

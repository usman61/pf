#include <stdio.h> 

void secToTime(int sec)  
{ int temp = sec; 
  int days = sec/86400;
      sec = sec%86400;
  int hr = sec/3600;
      sec = sec%3600;
  int min = sec/60;
      sec = sec%60;
      
  printf("\n%d Seconds => %d Day %d Hours %d Minutes %d Seconds\n",temp,days,hr,min,sec);               

}  

int main ()  
{  
    int sec;
    
    sec = 92000;
    secToTime(sec);
    
    sec = 3700;
    secToTime(sec);
    
     sec = 94000;
    secToTime(sec);
     
    return 0;
}  

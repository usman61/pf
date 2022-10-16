#include <stdio.h> 


int main ()  
{  
   int sec,temp,days,hr,min;
    
  sec = 92000;  
  temp = sec; 
  days = sec/86400;
      sec = sec%86400;
  hr = sec/3600;
      sec = sec%3600;
  min = sec/60;
      sec = sec%60;

  printf("\n%d Seconds => %d Day %d Hours %d Minutes %d Seconds\n",temp,days,hr,min,sec);      
    
    sec = 3700;
    temp = sec; 
  days = sec/86400;
      sec = sec%86400;
   hr = sec/3600;
      sec = sec%3600;
   min = sec/60;
      sec = sec%60;

  printf("\n%d Seconds => %d Day %d Hours %d Minutes %d Seconds\n",temp,days,hr,min,sec);   
  
  
    sec = 94000;
    temp = sec; 
   days = sec/86400;
      sec = sec%86400;
   hr = sec/3600;
      sec = sec%3600;
   min = sec/60;
      sec = sec%60;

  printf("\n%d Seconds => %d Day %d Hours %d Minutes %d Seconds\n",temp,days,hr,min,sec);  
  
  
   sec = 300;
    temp = sec; 
   days = sec/86400;
      sec = sec%86400;
   hr = sec/3600;
      sec = sec%3600;
   min = sec/60;
      sec = sec%60;

  printf("\n%d Seconds => %d Day %d Hours %d Minutes %d Seconds\n",temp,days,hr,min,sec);  

     
     
    return 0;
}  

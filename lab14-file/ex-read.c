#include <stdio.h>
#include <stdlib.h>

int main()
{
   char num[10];
   FILE *fptr;

// use appropriate location if you are using windows i.e (C:\\program.txt)
   if ((fptr = fopen("/home/usman/pf/program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   
   fgets(num,sizeof(num),fptr);
   //alternatively, we could also use fscanf(FILE *ptr, const char *format, ...) for reading 

   printf("Value of n=%s", num);
   fclose(fptr); 
  
   return 0;
}




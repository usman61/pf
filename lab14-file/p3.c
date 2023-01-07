#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char name[20];

   if ((fptr = fopen("/home/usman/pf/firstfile.txt","w")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fprintf(fptr,"Name: Muhammad Usman\nRoll-no: 21P-8743\nCGPA: 3.7");





   fclose(fptr); 
  
   return 0;
}
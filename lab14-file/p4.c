#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char name[30];

   if ((fptr = fopen("/home/usman/pf/firstfile.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

char demo[20];
 char *a = fgets(name,sizeof(name),fptr);
//    while(fgets(name,sizeof(name),fptr)!=NULL){
    printf("%s",a);
//    }

 char *b = fgets(name,sizeof(name),fptr);
//    while(fgets(name,sizeof(name),fptr)!=NULL){
    printf("%s------>",b);
 //  }

//    fprintf(fptr,"Name: Muhammad Usman\nRoll-no: 21P-8743\nCGPA: 3.7");





   fclose(fptr); 
  
   return 0;
}
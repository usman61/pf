#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr,*fptr2;
    char name[100];

// use appropriate location if you are using windows i.e (C:\\program.txt)
   if ((fptr = fopen("/home/usman/pf/names.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

    if ((fptr2 = fopen("/home/usman/pf/names_subj.txt","w")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }



while (fgets(name, sizeof(name), fptr)!=NULL) {

    name[strlen(name)-2] = '\0';

    strcat(name,",Programming Fundamentals,Calculus,English Composition");
    fprintf(fptr2,"%s\n",name);   

    
}


   fclose(fptr); 
  
   return 0;
}
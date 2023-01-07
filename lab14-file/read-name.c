#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char name[20];

// use appropriate location if you are using windows i.e (C:\\program.txt)
   if ((fptr = fopen("/home/usman/pf/names.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

while (fgets(name, sizeof(name), fptr)!=NULL) {
        printf("%s",name);

}

   fclose(fptr); 
  
   return 0;
}
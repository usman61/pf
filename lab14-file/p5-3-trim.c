#include <stdio.h>
#include<string.h>
#include <stdlib.h>
void print_name(int len){

    FILE *fptr;
    char name[20];
   if ((fptr = fopen("/home/usman/pf/names.txt","r")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   while (fgets(name, sizeof(name), fptr)!=NULL) {
    //  name[strcspn(name, "\n")] = 0;
   // name[strcspn( name, "\n" )] = '\0';
       if(len==strlen(name)-2){
        // printf("%s<------>%zu",name,strlen(name));
         printf("%s",name);
       }
}

   fclose(fptr); 


}
int main(int argc, char const *argv[])
{
   print_name(4); 




  
   return 0;
}
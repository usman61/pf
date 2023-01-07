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


// while (fscanf(fptr,"%s",name)!=EOF) {

//     // printf("%s\n", name); 
//      printf("%s------>%zu",name,strlen(name));
// }


// while (fgets(name, sizeof(name), fptr)!=NULL) {

//     for(int i=0; i<4; i++){
//         printf("%c",name[i]);
//     }
//     printf("\n");   

//     // printf("%s", name); 
// }

// rewind(fptr);
// printf("After Rewind\n");
int sum=0;
while (fgets(name, sizeof(name), fptr)!=NULL) {
    sum+=strlen(name)-2;
//    printf("%zu\n",strlen(name));
//   printf("%s------>%zu",name,strlen(name));

    for(int i=0; i<4; i++){
        printf("%c",name[i]);
    }
    printf("\n");   

    // printf("%s", name); 
}
  printf("\nSum %d\n",sum);

   fclose(fptr); 
  
   return 0;
}
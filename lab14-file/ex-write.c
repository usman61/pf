#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   // use appropriate location if you are using windows i.e (C:\\program.txt)
   fptr = fopen("/home/usman/pf/program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}
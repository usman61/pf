#include <stdio.h>
#include <string.h>
int main()
{
char fname[10]="Noman";
char lname[] = "Rahat";
char name2[10];
printf("\nLength: %zu",strlen(fname));
strcpy(name2,fname);
printf("\nname2: %s",name2);
int equal = strcmp(fname,name2);
printf("\nequal: %d",equal);
strcat(fname,lname);
printf("\nfname: %s\n",fname);
return 0;
}
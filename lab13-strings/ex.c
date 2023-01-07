#include <stdio.h>
#include <string.h>
int main()
{
char fname[10]="Noman";
char lname[] = "Rahat";
char name2[10]="A";

strcat(fname,lname);
printf("\nfname: %s\n",lname);
return 0;
}
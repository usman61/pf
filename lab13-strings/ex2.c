#include<stdio.h>
#include<string.h>
int main()
{
char name1[20];
char name2[20];
int temp;
int i=0,j;
printf("Enter your name;\n");
scanf("%s",name1);
printf("Your name is %s\n",name1);
for(j=strlen(name1)-1;j>=0;j--){
name2[j]=name1[i];
i++;
}
name2[i] = '\0';
printf("Reverse ----> %s --- Len %zu\n",name2,strlen(name2));
printf("Actual ----> %s --- Len %zu\n",name1,strlen(name1));
int equate = strcmp(name1,name2);
if(equate==0){
printf("The name is palindrome");
}
else{
printf("The name is not palindrome");
}
return 0;
}
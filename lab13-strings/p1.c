#include <stdio.h>
#include <string.h>
void reverse(char name[],int len){
    char rev[100];
    int j=0, i=len-1;
    //printf("len--------%d",i);
    while(i>=0){
      //  printf("<---->%c \n",name[i]);
        rev[j] = name[i];
        j++;
        i--;
    }
    // printf("Actual----%s",name);
    //  printf("actual len %zu\n",strlen(name));
    // printf("REv len %zu\n",strlen(rev));
    // printf("Rev----%s\n",rev);
    if(strcmp(name,rev)==0)
    printf("Palindrome\n");
    else
    printf("Not Palindrome\n");


}
int main()
{
    
    char name[100]="ali";
    printf("Enter your name: ");
    scanf("%s",name);
    // fgets(name,sizeof(name),stdin);
    reverse(name,strlen(name));
    

    
    
    
    return 0;
}

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[] = "maham";
    int len = strlen(str);
    int flag=1;

    for(int i=0; i<len-1; i++){
        if(str[i]!=str[len-1-i]){
            flag=0;
            printf("Not Palindrome\n");
            break;
        }
    }
    if(flag)
    printf("Palindrome\n");
    return 0;
}

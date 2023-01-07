#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[]="aeiouxyze";
    char op='N',freq_char;
    int vowels=0,consonant=0,mode=0;
    int i,j,len,freq=1,m_freq;
    char another[100];
    while (op!='E')
    {
        printf("Enter the String\n");
        scanf("%s",str);
    printf("\nA) Count the number of vowels in the string\n");
    printf("B) Count both the vowels and consonants in the string\n");
    printf("C) Display the most frequent character in the string\n");
    printf("D) Concatenate another string with the existing string\n");
    printf("E) Exit the program\n");
    scanf("\n%c",&op);
    len = strlen(str);
    switch (op)
    {
    case 'a':
    case 'A':
    vowels=0;
    
       for(i=0;i<len;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        vowels++;
       }
       printf("Number of Vowels %d\n",vowels);
        break;

    case 'b':
    case 'B':
        vowels=0;
        consonant=0;
   
       for(i=0;i<len;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        vowels++;
        else
        consonant++;
        }
        printf("Number of Vowels %d\n",vowels);
        printf("Number of Consonant %d\n",consonant);
        break;    
    
    case 'c':
    case 'C':
    for(i=0; i<len; i++){
        freq=1;
        for(j=i+1; j<len; j++){
            if(str[i]==str[j])
            freq++;
        }
        if(freq>m_freq){
            m_freq= freq;
            freq_char = str[i];

        }
        
    }
    printf("Frequent Character in String is %c Frequency %d\n",freq_char,m_freq);

    case 'd':
    case 'D':
    printf("Enter String you want to concatenate\n");
    scanf("%s",another);
    strcat(another,str);
    printf("%s\n",another);



    }
    }
    



    return 0;
}

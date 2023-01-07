#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
   int i, x;
   char str[100],encrypt[100];
   int shift=3;

   printf("\nPlease enter a string:\t");
   fgets(str,sizeof(str),stdin);
//    gets(str);
   str[strcspn(str, "\n")] = 0;


   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);

   //using switch case statements
   switch(x)
   {
   case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        // str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value
        if (isupper(str[i]) )
            encrypt[i] = (int)(str[i] + shift - 65) % 26 + 65;
 
        // Encrypt Lowercase letters
        else
            encrypt[i] = (int)(str[i] + shift - 97) % 26 + 97;

      printf("\nEncrypted string: %s\n", encrypt);
      break;

   case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        // str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value
        if (isupper(str[i]) )
            encrypt[i] = (int)(str[i] + 26-shift - 65) % 26 + 65;
 
        // Encrypt Lowercase letters
        else
            encrypt[i] = (int)(str[i] + 26-shift - 97) % 26 + 97;

      printf("\nEncrypted string: %s\n", encrypt);
      break;

   default:
      printf("\nError\n");
   }
   return 0;
}
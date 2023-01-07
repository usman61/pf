#include <stdio.h>
#include<string.h>
int main()
{
  char str[100], rev[100];
  int i, j, count = 0;
  scanf("%s", str);
  printf("\nString Before Reverse: %s -- Len %zu", str,strlen(str));
  //finding the length of the string
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  //reversing the string by swapping
  for (i = 0; i < count; i++)
  {
    printf("----%d\n",i);
    rev[i] = str[j];
    j--;
  }
  i++;
//   rev[i] = '\0';

  printf("\nString After Reverse: %s   --- Len %zu ", rev,strlen(rev));
}
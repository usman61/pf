#include <stdio.h>
int main()
{
   char exit;
   do
{
    printf("In Loop\n");
    printf("Exit Loop (y/n)");
    scanf("%c",&exit);
}
while(exit!='y');

 return 0;
}
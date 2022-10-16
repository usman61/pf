// C program to illustrate If statement
#include <stdio.h>
int dicountedValue(int price);  
int main()
{
    int s1,s2,s3;
    printf("Input Length of the triangle sides:\nx:");
    scanf("%d",&s1);
    printf("y:");
    scanf("%d",&s2);
    printf("z:");
    scanf("%d",&s3);

    if(s1==s2 && s2==s3)
    printf("Equilateral Triangle\n");
    else if (s1==s2 || s1==s3 || s2==s3)
    printf("Isosceles Triangle\n");
    else
    printf("Scalene Triangle\n");

   return 0;
  
  
}

#include <stdio.h>
int printCommon(int arr1[], int len1, int arr2[],int len2);

int main()
{
int arr1[] = {2,3,4,4,6};
int arr2[] = {4,6,7,8,9};
int len1 = 5;
int len2 = 5;
printCommon(arr1,len1,arr2,len2);
return 0;
}
int printCommon(int arr1[], int len1, int arr2[],int len2)
{
for(int i=0; i<len1;i++)
{
for(int j=0;j<len2;j++)
{
if(arr1[i] == arr2[j])
{
printf("\n Common elements is %d", arr1[i]);
}
}
}
}
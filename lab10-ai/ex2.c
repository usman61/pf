// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>
int main() {
int values[5],sum=0;

printf("Enter 5 integers: ");
// taking input and storing it in an array
for(int i = 0; i < 5; ++i) {
scanf("%d", &values[i]);
}
printf("Displaying integers:\n");
// printing elements of an array

for(int i = 0; i < 5; ++i) {
  sum = sum + values[i];
}
printf("Sum = %d",sum);
printf("Average = %d",sum/5);

return 0;
}

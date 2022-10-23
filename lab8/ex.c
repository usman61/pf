#include <stdio.h>
int get_factorial(int n){
  int fact = 1;
 for (int i=1; i<=n; i++)
 {
 fact = fact * i;
 }


return fact;
}
int main()
{
	int num, count, sum = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	int ans = get_factorial(num);
	printf("Sum = %d", ans);
	int ans2 = get_factorial(num-3);
	printf("\nSum = %d", ans2);

return 0;
}





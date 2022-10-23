// C program to reverse a number
#include <stdio.h>
int get_lcm(int n1,int n2){
    int prod = n1*n2,i;
    int max = n1>n2? n1:n2;

    for(i=max; i<=prod; i++){
        if(i%n1==0 && i%n2==0)
        break;
    }

    return i;
}
int main()
{
    int n1,n2,lcm;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    printf("LCM of %d & %d is %d\n",n1,n2,get_lcm(n1,n2));

	return 0;
}



#include <stdio.h>
int get_hcf(int n1,int n2){
    int prod = n1*n2,i;
    int min = n1<n2? n1:n2;

    for(i=min; i>=1; i--){
        if(n1%i==0 && n2%i==0)
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
    printf("HCF of %d & %d is %d\n",n1,n2,get_hcf(n1,n2));

	return 0;
}



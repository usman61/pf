#include<stdio.h>
int get_factorial(int n);
int main()
{
int n,r,n_fact,r_fact,n_r,denom;
n_r = n-r;

printf("Enter n:\n");
scanf("%d",&n);

printf("Enter r:\n");
scanf("%d",&r);
n_fact = get_factorial(n);
printf("N = %d Factorial %d\n",n,n_fact);
denom = get_factorial(n_r);
printf("N-R Factorial %d\n",denom);

printf("NPR = %d\n",n_fact/denom);




return 0;
}

/*
this ftn would calc factorial 
it takes one argument
*/
int get_factorial(int n){
    
    for(int i=n; i>1; i--){
        fact*=i;
    }
    printf("Fact %d")



    return fact123;

}
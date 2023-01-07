#include<stdio.h>
int get_factorial(int n);
int main()
{
int n=5,r=3,n_fact=1,r_fact=1,nr_fact=1;

for (int i=n; i>1; i--){
    n_fact = n_fact*i;
}

for (int i=r; i>1; i--){
    r_fact = r_fact*i;
}

for (int i=(n-r); i>=2; i--){
    r_fact = r_fact*i;
}
return 0;
}

/*
this ftn would calc factorial 
it takes one argument
*/
int my_ftn(int n){
    int fact=1;

    for(int i=n; i>=2; i--){
        fact = fact*i;
    }

    return fact;

}
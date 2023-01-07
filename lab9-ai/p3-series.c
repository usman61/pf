#include <stdio.h>
#include <math.h>
int get_factorial(int n);
float compute_series(int n,int x);
int get_power(int b,int x);
int main(int argc, char const *argv[])
{
    int n=5,x=3;
    float result = compute_series(n,x);
    printf("Output %.2f\n",result);
    
    
    return 0;
}

float compute_series(int n,int x){
  int k;
  float sum=0.0;
  for(k=0; k<=n; k++){
    sum+=(float)get_power(x,k)/get_factorial(k);
    // printf("k=%d\n",k);
    // printf("pow %d :",get_power(x,k));
    // printf("fact %d\n",get_factorial(k));


  }

 return sum;
}
int get_power(int b,int x){
    int pow = 1;
    while(x>0){
        pow*=b;
        x--;
    }
    return pow;
}
int get_factorial(int n){
    int fact=1;
    for(int i=n; i>1; i--)
    fact*=i;

    return fact;
}
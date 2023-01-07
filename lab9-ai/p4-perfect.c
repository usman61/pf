#include<stdio.h>
void perfect_numbers(int n){
    int count=0,i,no=6,sum;

    while(count<n){
        sum=0;
        for(int i=1; i<=no/2;i++){
            if(no%i==0)
            sum+=i;
        }
        if(sum==no){
        printf("%d is a perfect number\n",no);
        count++;
        }
        no++;
        
        


    }
}
int main(int argc, char const *argv[])
{
    perfect_numbers(2);

    return 0;
}

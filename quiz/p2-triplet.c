#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=1,b=2,c=3;
    int flag=0;

    for(a=1; a<b; a++){
        for(b=a+1; b<c; b++){
            for(c=b+1; a+b+c<=1000; c++){
                if( (a*a)+(b*b)==(c*c) && (a+b+c)==1000){
                    printf("a= %d, b=%d, c=%d ,prod =%d",a,b,c,a*b*c);
                    flag = 1;
                    break;      // break loop
                }
                if(flag) break;

            }
            if(flag) break;
        }
    }




    return 0;
}

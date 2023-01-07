#include<stdio.h>
int main(int argc, char const *argv[])
{
    int flag=0;
    for(int a=1; a<500; a++){
        for(int b=a+1; b<500; b++){
            for(int c=b+1; c<1000; c++){
                if( (a*a)+(b*b)==(c*c) && (a+b+c)==1000){
                    flag=1;
                    printf("a= %d, b=%d, c=%d ,prod =%d",a,b,c,a*b*c);
                    break;
                }
                if(flag) break;

            }
            if(flag) break;
        }
    }




    return 0;
}

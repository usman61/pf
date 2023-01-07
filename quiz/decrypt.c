#include <stdio.h>
int main(int argc, char const *argv[])
{
    int digit = 3412,decrypt=0;
    int rem,orig = digit,arr[4],i=0;
    int a,b,c,d;
    b = digit%10;
    a = (digit/10)%10;
    d = (digit/100)%10;
    c = (digit/1000)%10;

    if(a<7) a+=10;
    if(b<7) b+=10;
    if(c<7) c+=10;
    if(d<7) d+=10;

    a-=7;
    b-=7;
    c-=7;
    d-=7;

   printf("Orig %d \n\n",digit);
   printf("Decrypted digit %d%d%d%d",a,b,c,d);
     
    return 0;
}

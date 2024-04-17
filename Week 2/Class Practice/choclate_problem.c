#include<stdio.h>
int main()
{
    int n,cho,pack,sum=0;
    scanf("%d",&n);
    cho = n;
    pack = cho;
    while(pack>3)
    {
        cho = pack/4;
        pack = cho + (pack%4);
        sum = sum + cho;
    }
    printf("%d",(sum+n));
}
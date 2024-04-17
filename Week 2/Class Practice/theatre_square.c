#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double col = ceil((double)a/(double)c);
    double row = ceil((double)b/(double)c);
    long long int res = col*row;
    printf("%lld",res);
    return 0;
}
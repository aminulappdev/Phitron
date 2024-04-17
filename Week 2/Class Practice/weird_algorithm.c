#include <stdio.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
    while (a!=1)
    {
        printf("%lld ",a);
        if(a%2==0)
        {
            a = a/2;
        }
        else if(a%2!=0)
        {
            a = a*3 + 1;
        }
    }
    printf("1");

    return 0;
}


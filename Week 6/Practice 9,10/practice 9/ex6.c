#include <stdio.h>

void divisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
          printf("%d ",i);
        }
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    divisors(n);
    
}
#include <stdio.h>
#include <math.h>

void pattern(int n)
{
   
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < (n-i); j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
}
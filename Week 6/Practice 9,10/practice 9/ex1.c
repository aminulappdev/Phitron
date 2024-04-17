#include <stdio.h>
#include <math.h>

void sequence(int n)
{
    if (n > 0)
    {
        for (int i = n; i >= 0; i--)
        {
            printf("%d ", i);
        }
        for (int i = -1; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }

        for (int i = 1; i <= abs(n); i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("%d", n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    sequence(n);
}
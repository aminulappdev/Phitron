#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
    }
    
    return 0;
}

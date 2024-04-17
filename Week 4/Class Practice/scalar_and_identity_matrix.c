#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    int cnt = 0;
    int val[10], init;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = 0; j < m; j++, k++)
        {
            if (i == j)
            {
                val[k] = arr[i][j];
                // printf("%d -> %d   ",k,val[k]);
                cnt++;
            }
        }
    }

    int error = 0;
    for (int k = 1; k < cnt; k++)
    {
        init = val[0];
        if (init != val[k])
        {
            error++;
        }
    }

    if (error == 0)
    {
        printf("Ok");
    }
    else
    {
        printf("Not Ok");
    }
}
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int sum_arr[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int o,p;
    scanf("%d %d",&o,&p);
    int arr2[o][p];
    for (int i = 0; i < o; i++)
    {
        for(int j=0;j<p; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m; j++)
        {
            sum_arr[i][j] = (arr[i][j] + arr2[i][j]);
        }
    }
   


    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m; j++)
        {
            printf("%d ",sum_arr[i][j]);
        }
        printf("\n");
    }
    
}
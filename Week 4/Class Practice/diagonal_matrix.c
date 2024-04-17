#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m; j++)
        {
            if((i==j) && arr[i][j] == 0 || ((i+j)==n-1) && arr[i][j] == 0)
            {
               cnt++; 
            }
            
        }
    }
    
    //printf("%d\n",cnt);
   
   if(cnt == 0)
   {
     printf("Diagonal");
   }
   else 
   {
    printf("Not Diagonal");
   }
   
}
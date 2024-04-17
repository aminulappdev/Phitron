#include <stdio.h>
int main()
{
    int arr[3][3],p;
    scanf("%d",&p);
    int n, m;
    for (int i = 0; i < p; i++)
    {
       for(int j=0; j<2; j++)
       {
         scanf("%d %d", &n, &m);
       }
        
    }
        
        
        for (int i = 1; i <= 3; i++)
        {

            for (int j = 1; j <= 3; j++)
            {
                if (n == i && m == j)
                {
                    continue;
                }
                printf("%d,%d ", i, j);
            }
            printf("\n");
        }
    
}
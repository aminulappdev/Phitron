#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int arr[n],cnt=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<1; j++)
        {
            if(arr[i]!=arr[j])
            {
                cnt++;
            }
        }

    }
   if(cnt!=0)
    {
        printf("NO");
    }
    else if(cnt==0)
    {
        printf("YES");
    }
}

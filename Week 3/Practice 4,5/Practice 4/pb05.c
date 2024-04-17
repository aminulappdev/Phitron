#include<stdio.h>
int main()
{   int n,m;
    scanf("%d",&n);
    int arr[n],cnt=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
                if(arr[i]!=arr[j])
                {
                    if((arr[i]+arr[j])==m)
                    {
                        cnt++;
                    }
                    continue;
                }
        }

    }
    if(cnt!=0)
    {
        printf("Yes");
    }
    else if(cnt==0)
    {
        printf("No");
    }
}

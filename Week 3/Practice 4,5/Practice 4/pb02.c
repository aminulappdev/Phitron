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
    for(int i=0; i<2; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        a = arr[i];
        printf("%d ",(a+b));
        printf("\n");
    }

}

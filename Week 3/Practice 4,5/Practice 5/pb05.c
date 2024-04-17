
#include<stdio.h>
int main()
{
   int n,cnt2=0;
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++)
   {
     scanf("%d",&arr[i]);
   }

   for(int i=0; i<n; i++)
   {
    int cnt=0;
       for(int k=2; k<arr[i]; k++)
       { 
        if(arr[i]%k==0)
          {
            cnt++;
          }
       }
       if(cnt==0)
       {
        cnt2++;
        printf("%d ",arr[i]);
       }
   }
    printf("\n%d",cnt2);
}

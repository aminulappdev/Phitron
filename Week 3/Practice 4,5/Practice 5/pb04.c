
#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=1; i<=n; i++)
   {
      scanf("%d",&arr[i]);
   }
   for(int i=1; i<=n; i++)
   {
       int cnt=0,c=0;
      for(int j=2; j<(arr[i]-1); j++)
      {

          if(arr[i]%j==0)
          {
              cnt++;
          }
      }
      if(cnt==0)
      {
          printf("%d ",arr[i]);
      }

   }

}

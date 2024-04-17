#include<stdio.h>
int main()
{
   int n,sum=0;
   scanf("%d",&n);
   int arr[n];
   for(int i=1; i<=n; i++)
   {
      scanf("%d",&arr[i]);
   }
   for(int i=1; i<=n; i++)
   {
       sum = sum + arr[i];
   }
   if(sum%2==0)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }

}


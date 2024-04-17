
#include<stdio.h>
int main()
{
   int n,moves=0;
   scanf("%d",&n);
   int arr[200005];
   for(int i=0; i<n; i++)
   {
     scanf("%d",&arr[i]);
   }
   for(int i=1; i<n; i++)
   {
      if(arr[i]<arr[i-1])
      {
        moves += (arr[i-1] - arr[i]);
        arr[i] = arr[i-1];
      }
   }
   printf("%d\n",moves);

}

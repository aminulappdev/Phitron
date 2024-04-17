#include<stdio.h>
int main()
{
   int n,f=0,s=1,c=0,fib;
   scanf("%d",&n);
   while (c<n)
   {
      if(c<=1)
      {
         fib = c;
      }
      else
      {
         fib = f + s;
         f = s;
         s = fib;
      }
      printf("%d ",fib);
      c++;
   }
   
}

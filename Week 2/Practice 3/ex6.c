#include<stdio.h>
int main()
{
   int n1,n2;
   scanf("%d %d",&n1,&n2);
   if(n1>n2)
   {
       for(int i=n1; i<=23; i++)
   {
       printf("%d ",i);
   }
   for(int j=0; j<=n2; j++)
   {
       printf("%d ",j);
   }
   }
   else
   {
       for(int k=n1; k<=n2; k++)
           {
                printf("%d ",k);
           }
   }
}


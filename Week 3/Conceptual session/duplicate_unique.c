#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int input[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&input[i]);
    }
    max = input[0];
    for(int i=0; i<n; i++)
    {
        if(input[i]>max)
        {
            max = input[i];
        }
    }
    int arr[max+1];
    for(int i=0; i<=max; i++)
    { 
       arr[i]=0;
    }

    for(int i=0; i<n; i++)
    { 
       arr[input[i]]++;
    }
   
     for(int i=0; i<=max; i++)
    { 
       if(arr[i]>1)
       {
         printf("%d ",i);
       }
    }   
}

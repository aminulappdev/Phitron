#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,even=0,odd=0,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
   if(even<odd)
   {
       for(int i=1; i<=n; i++)
       {
           if(arr[i]%2==0)
           {
               cout<<i;
           }
       }
   }
   else
   {
       for(int i=1; i<=n; i++)
       {
           if(arr[i]%2!=0)
           {
               cout<<i;
           }
       }
   }
}

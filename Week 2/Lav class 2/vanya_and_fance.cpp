#include<iostream>
using namespace std;
int main()
{
    int n,s,cnt=0;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=s)
        {
            cnt++;
        }
        else if(arr[i]>s)
        {
            cnt+=2;
        }
    }
    cout<<cnt;
}

#include<iostream>
using namespace std;
int main()
{   
    int n;
    scanf("%d",&n);
    int arr[n];
    int cnt=0,sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[j];
        }
        sum = arr[0]+arr[1]+arr[2];
        if(sum>1)
        {
            cnt++;
        }
        
    }
    cout<<cnt;
}
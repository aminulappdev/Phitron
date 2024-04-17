#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,s,cnt=0;
    cin>>n>>s;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[s]==0)
        {
            for(int i=1; i<=n; i++)
            {
                if(arr[i]==0)
                {
                    continue;
                }
                cnt++;

            }

            break;
        }

        if(arr[i]>=arr[s])
        {
            cnt++;
        }

    }
    cout<<cnt;
}
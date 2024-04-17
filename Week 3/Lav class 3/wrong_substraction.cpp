#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n,s;
    cin>>n>>s;
    for(int i=0; i<s; i++)
    {
        if(n%10!=0)
        {
            n = n-1;
        }
        else if(n%10==0)
        {
            n = n/10;

        }
    }
    cout<<n;
}
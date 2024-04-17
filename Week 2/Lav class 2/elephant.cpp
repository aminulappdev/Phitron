#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n;
    s = n/5;
    if(n%5!=0)
    {
        cout<<s+1;
    }
    else
    {
        cout<<s;
    }
}
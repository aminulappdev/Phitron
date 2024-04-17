#include<iostream>
using namespace std;
int main()
{
    int a,cnt=0;

    cin>>a;

    char s[a];
    for(int i=0; i<a; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<a; i++)
    {
        if(s[i] == s[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt;
}
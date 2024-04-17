#include<iostream>
using namespace std;
int main()
{
    long long int n,s;
    cin>>n>>s;
    long long int odd;
    if(n%2==0)
    {
        odd = n/2;
    }
    else
    {
        odd = n/2 +1;
    }

    if(s<=odd)
    {
        cout<<((s-1)*2+1);
    }
    else if(s>odd)
    {
        s = s - odd;
        cout<<(s*2);
    }

}

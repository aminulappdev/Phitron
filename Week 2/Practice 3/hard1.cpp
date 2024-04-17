#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,g1,g2;
    cin>>a>>b>>c>>d;
    g1 = max(a,b);
    g2 = max(c,d);
    if(g1<c and g1<d)
    {
        cout<<"No";
    }
    else if(g2<a and g2<b)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }

}

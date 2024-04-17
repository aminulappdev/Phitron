#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string word;
    for(int i =0; i<n; i++)
    {
        cin>>word;
        int l = word.length();
        if(word.length()>10)
        {
            cout<<word[0]<<l-2<<word[l-1]<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
}
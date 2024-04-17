#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    max = arr[1];
    for (int i = 1; i <= n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    int newarr[max];
    for (int i = 1; i <= max; i++)
    {
        newarr[i] = 0;
        cout << newarr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        newarr[arr[i]]++;
    }
    for (int i = 1; i <= max; i++)
    {
        cout << newarr[i] << " ";
    }
}

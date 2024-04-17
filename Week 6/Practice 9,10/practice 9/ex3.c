#include <stdio.h>
#include <math.h>

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        int f,l;
        f = arr[i];
        while (f>=10)
        {
            f = f/10;
        }
        //printf("%d -> ", f);
        l = arr[i]%10;
        sum += (f+l);
    }
   return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int res = sum(arr, n);
    printf("%d",res);
}
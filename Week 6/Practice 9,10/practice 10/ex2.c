#include <stdio.h>
#include <math.h>

void pattern(int n)
{

    // int i, a = 1, count;

    // while (a <= 100)
    // {
    //     count = 0;
    //     i = 2;
    //     while (i <= a / 2)
    //     {
    //         if (a % i == 0)
    //         {
    //             count++;
    //             break;
    //         }
    //         i++;
    //     }
    //     if (count == 0 && a != 1)
    //     {
    //         int arr[23];
    //         for (int i = 0; i < 22; i++)
    //         {
    //             arr[i]= a;
    //         }
    //         printf(" %d ", a);
    //     }

    //     a++;
    // }

    int k = 2;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;

        for (int j = 1; j <= i; j++)
        {

            // for (int n = 2; n < k; n++)
            // {
            //     if (k % n == 0)
            //     {
            //         cnt++;
            //     }
            // }

            // if (cnt == 0)
            // {
            //     printf("%d ", k);
            // }

            printf("%d ", k);
            cnt = 0;
            k++;
        }
        printf("\n");
        // cnt = 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
}
#include <stdio.h>

int main()
{
    int i, a = 1, count = 0;
    int arr[23];

    for (int b = 0; b < 22; b++)
    {
        while (a <= 100)
        {
            count = 0;
            i = 2;

            while (i <= a / 2)
            {
                if (a % i == 0)
                {
                    count++;
                    break;
                }
                i++;
            }
            if (count == 0 && a != 1)
            {
                arr[b] = a;
                //printf(" %d ", a);
            }

            a++;
        }
    }

    for (int b = 0; b < 22; b++)
            {
                printf("%d ",arr[b]);
            }

    return 0;
}
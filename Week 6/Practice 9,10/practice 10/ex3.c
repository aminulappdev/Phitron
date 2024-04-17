#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s ",str[i]);
    }
    
}
#include <stdio.h>
#include <string.h>
void divisors(char str[], int len)
{
    int cnt = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            //printf("%d ",str[i]);
            cnt++;
        }
    }
    //printf("\n%d",cnt);
    if (cnt == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

int main()
{
    char str[100];
    scanf("%s", &str);
    int len = strlen(str);
    divisors(str, len);
}
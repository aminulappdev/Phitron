#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    scanf("%s",str);
    int l = strlen(str);
    for(int i=0; i<l; i++)
    {
       if(str[i] >=65 && str[i] <= 90)
       {
        printf("Capital ");
       }
       else if(str[i] >= 97 && str[i] <= 122)
       {
        printf("Small ");
       }
    }
}
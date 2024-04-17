#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],new_str[100],cnt=0;
    scanf("%s",str);
    scanf("%s",new_str);
    int l = strlen(str);
    for(int i=0,j=0; i<l; i++,j++)
    {
        printf("%c -> %c\n",str[i],new_str[j]);
        if(new_str[j]!=str[i])
        {
           cnt++;
        }
    }
    if(cnt==0)
    {
        printf("same");
    }
    else
    {
        printf("Not same");
    }
}
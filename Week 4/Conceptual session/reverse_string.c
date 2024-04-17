#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],new_str[100],cnt=0;
    scanf("%s",str);
    int l = strlen(str);
    for(int i=l-1,j=0; i>=0; i--,j++)
    {
        new_str[j]=str[i];   
    }
    for(int j=0; j<l; j++)
    {
        printf("%c ",new_str[j]);  
    }
   
}
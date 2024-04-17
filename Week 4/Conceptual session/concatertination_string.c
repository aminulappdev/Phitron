#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],new_str[100],cnt=0;
    scanf("%s",str);
    scanf("%s",new_str);
    int l = strlen(str);
    int l2 = strlen(new_str);
    for(int j=0; j<l2; j++)
    {
        str[l+j] = new_str[j];  
    }
    for(int j=0; j<(l+l2); j++)
    {
        printf("%c ",str[j]);  
    }
   
}
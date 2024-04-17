#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],v=0,c=0;
    scanf("%s",str);
    int l = strlen(str);
    for(int i=0; i<l; i++)
    {
       if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
       {
          v++;
       }
       else
       {
          c++;
       }
       
    }

    printf("Vowel is = %d\nConsonant is = %d",v,c);
}
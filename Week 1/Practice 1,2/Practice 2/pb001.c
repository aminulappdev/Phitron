#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("A is big");
    }
    else if (b>a)
    {
        printf("B is big");
    }
    else if (a==b)
    {
        printf("They are equal");
    }
    
    return 0;
}
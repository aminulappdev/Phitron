#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        if(a>b && b>c)
        {
            printf("A and B both bigger");
        }
        else if(a>b && c>b)
        {
            printf("A and C both bigger");
        }
        else
        {
            printf("A is big");
        }   
    }
    else if (b>a && b>c)
    {
        if(b>a && a>c)
        {
            printf("B and A both bigger");
        }
        else if(b>a && c>a)
        {
            printf("B and C both bigger");
        }
        else
        {
            printf("B is big");
        }   
    }
    else if (c>a && c>b)
    {
        if(c>a && a>b)
        {
            printf("C and A both bigger");
        }
        else if(c>a && b>a)
        {
            printf("C and B both bigger");
        }
        else
        {
            printf("C is big");
        }   
    }
    else if (a==b==c)
    {
        printf("They are equal");
    }
    
    return 0;
}
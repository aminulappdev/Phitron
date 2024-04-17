#include <stdio.h>

int calculate(int n,int m,char op)
{
    int res;
    if(op == '+')
    {
        res = n + m;
        return res;
    }
    else if(op == '-')
    {
        res = n - m;
        return res;
    }
    else if(op == '*')
    {
        res = n * m;
        return res;
    }
    else if(op == '/')
    {
        res = n / m;
        return res;
    }
    
}

int main()
{
    int n,m;
    char op;
    scanf("%c",&op);
    scanf("%d %d",&n,&m);
    printf("%d ",calculate(n,m,op));
    
}
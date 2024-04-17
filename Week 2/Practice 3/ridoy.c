#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);

    if(a>x && a>y && b>x && b>y)
        printf("No\n");
    else if( x>a && x>b && y>a && y>b)
        printf("No\n");
    else
        printf("Yes\n");

}
}

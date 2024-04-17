#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    if(a>=0 && a<40)
    {
        printf("F");
    }
    else if(a>=40 && a<50)
    {
        printf("C");
    }
    else if(a>=50 && a<60)
    {
        printf("B");
    }
    else if(a>=60 && a<70)
    {
        printf("A-");
    }
    else if(a>=70 && a<80)
    {
        printf("A");
    }
    else if(a>=80 && a<=100)
    {
        printf("A+");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        float a,b,c;
        printf("Enter your marks is : ");
        scanf("%f %f %f",&a,&b,&c);
        float av = (a+b+c)/3;
        printf("Your average is : %.2f\n",av);
    }
}
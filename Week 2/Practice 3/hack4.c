#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,rem,sum=0;
    scanf("%d",&a);
    int temp = a;
    while(temp!=0)
    {
        rem = temp%10;
        sum += rem;
        temp = temp/10;
    }
    printf("%d",sum);

    return 0;
}

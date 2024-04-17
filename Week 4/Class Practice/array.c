#include <stdio.h>
#include <stdbool.h>

bool aresame(short int a[], size_t n) // added value to check
{
    for (size_t i = 1; i < n; i++)
    {
        if(a[i] != a[0])
            return false; // if a different value is found return false
    }
    return true; // if it reaches this line, all the values are the same
}

int main()
{
    short int check[]={1,1,1,1,1,1,1,1,1};
    printf("%s", aresame(check, sizeof check / sizeof *check) ? "true" : "false");
}
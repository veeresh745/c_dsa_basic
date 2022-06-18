// program to find factorial of a number.
#include <stdio.h>
int fact(int x);
int main()
{
    int x;
    printf("Enter a number whose factorial you are looking for ");
    scanf("%d", &x);

    int f = fact(x);
    printf("%d",f);
}

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}
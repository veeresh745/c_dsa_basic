#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Number is divisible by 2");
    }
    else
    {
        printf("Number is not divisible by 2");
    }
    return 0;
}
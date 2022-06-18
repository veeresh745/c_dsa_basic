// program to count trailing zeros in factorial of a number (efficient method).
#include <stdio.h>
int countTrailingZeros(int x);
int main()
{
    int x;
    printf("Enter a number whose trailing zeros after factorial you want ");
    scanf("%d", &x);

    int f = countTrailingZeros(x);
    printf("%d", f);
}

// best efficient method
int countTrailingZeros(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    return res;
}

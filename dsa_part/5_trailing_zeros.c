// program to count trailing zeros in factorial of a number less efficient method.
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

// using recursion
int countTrailingZeros(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    int res = 0;
    while (fact % 10 == 0){
        res++;
        fact = fact/10;
    }
    return res;
}

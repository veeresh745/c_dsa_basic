// sum of n natural number using recursion.
//*1+2+3+4+5----------n-1 + n = sum(n-1) +n

#include <stdio.h>
int sum(int n);
int main()
{
    printf("sum is : %d", sum(5));

    return 0;
}

// recursive function
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumnm1 = sum(n - 1); // sum from 1 to n
    int sumn = sumnm1 + n;
    return sumn;
}
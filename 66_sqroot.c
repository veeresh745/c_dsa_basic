// Write a function to find sum of digits of a number.
#include <stdio.h>
int sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter any number \n");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d", n, sum(n));
}

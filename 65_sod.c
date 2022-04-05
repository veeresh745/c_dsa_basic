// Write a function to find sum of digits of a number.
#include <stdio.h>
int sod(int n);
int main()
{
    int n;
    printf("Enter any number \n");
    scanf("%d", &n);

    printf("Sum of digit %d is: %d\n", n, sod(n));
}

int sod(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;     //we are at last digit
        num = num / 10;           //reaching first digit
    }
    return sum;
}
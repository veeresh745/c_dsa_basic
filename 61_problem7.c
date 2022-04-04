/*Write a program to check if the given number is a
natural number.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any value: \n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Natural number");
    }
    else
    {
        printf("Not a natural number");
    }
    return 0;
}
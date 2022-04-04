// Write a program to print the smallest number of two.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers simultaneously\n");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf("smallest number is %d\n", a);
    }
    else {
        printf("Smallest number is %d\n", b);
    }
    return 0;
}
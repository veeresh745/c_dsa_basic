/*Write a program in C to find the maximum number
between two numbers using a pointer.*/

#include <stdio.h>
int max(int *a, int *b);
int main()
{
    int a=6, b=5;
    max(&a, &b);
    return 0;
}

int max(int *a, int *b)
{
    if (*a > *b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("b is greater than a\n");
    }
}

// printing sum of two numbers using function
#include <stdio.h>
int sum(int x, int y);
int main()
{
    int x, y;
    printf("Enter first number\n");
    scanf("%d", &x);
    printf("Enter second number\n");
    scanf("%d", &y);

    int s = sum(x, y);
    printf("sum is %d", s);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
// Make your own pow function.
#include <stdio.h>
#include <math.h>
int main()
{
    int power(int x, int y);
    int x, y;
    printf("Enter two number considering x to the power y\n");
    scanf("%d %d", &x, &y);

    printf("%d to the power %d is %d\n", x, y, power(x, y));
}

int power(int a, int b)
{
    long long int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }
    return result;
}
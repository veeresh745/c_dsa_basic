// efficient lcm program
#include <stdio.h>
int lcm(int x, int y);
int main()
{
    int x, y;
    printf("Enter numbers");
    scanf("%d %d", &x, &y);

    int result = lcm(x, y);
    printf("LCM: %d", result);
}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}

//time complexity: O(log(min(a,b)))
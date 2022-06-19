// program to find greatest common divisor using euclidian algorithm/
#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int x, y;
    printf("Enter numbers");
    scanf("%d %d", &x, &y);
    

    int result = gcd(x, y);
    printf("%d", result);
   
}

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
        
    }
    return a;
}
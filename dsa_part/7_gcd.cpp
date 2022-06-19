// program to find greatest common divisor
#include <iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
    int x, y;
    // printf("Enter numbers");
    // scanf("%d %d", &x, &y);
    cout<<"Enter numbers";
    cin>>x>>y;

    int result = gcd(x, y);
    // printf("%d GCD:", result);
    cout<<result;
}

int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}
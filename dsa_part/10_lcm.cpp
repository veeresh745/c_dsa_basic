//Program to find least common multiple of two numbers.
#include <iostream>
using namespace std;
int lcm(int x, int y);
int main()
{
    int x, y;
    // printf("Enter numbers");
    // scanf("%d %d", &x, &y);
    cout << "Enter numbers";
    cin >> x >> y;

    int result = lcm(x, y);
    // printf("%d GCD:", result);
    cout << result;
}

int lcm(int a, int b)
{
    int res = max(a, b);
    while (res > 0)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
        res++;
    }
    return res;
}
//Time complexity: O(a*b-max(a,b))
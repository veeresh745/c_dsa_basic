// Checking if a given number is prime or not, More efficient mainly for large number.
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num);

int main()
{
    int num;
    cout << "Enter number to check";
    cin >> num;

    bool res = isPrime(num);

    if (res == 1)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a prime number";
    }
}

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

//Checking if a given number is prime or not
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n);

int main()
{
    int n;
    cout << "Enter number to check";
    cin >> n;

    bool res = isPrime(n);

    if (res == 1)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a prime number";
    }
}

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        return true;
    }
}
#include <bits/stdc++.h>
using namespace std;
int sieve(int input);
int main()
{
    int input;
    cout << "Enter number ";
    cin >> input;

    int res = sieve(input);
}

int isPrime(int number)
{
    if (number == 1)
    {
        return 0;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
}

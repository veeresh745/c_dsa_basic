//print prime number smaller than equal to given number.
#include <bits/stdc++.h>
using namespace std;
int printPrimes(int num);
int main()
{
    int num;
    cout << "Enter number ";
    cin >> num;

    int res = printPrimes(num);
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

int printPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}
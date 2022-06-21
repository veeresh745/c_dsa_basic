// find prime factors of a number
#include <stdio.h>
int primeFactors(int num);
int main()
{
    int num;
    printf("enter number");
    scanf("%d", &num);

    int res = primeFactors(num);
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

int primeFactors(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                printf("%d",i);
                x = x * i;
            }
        }
    }
}
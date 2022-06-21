// find prime factors of a number (most Efficient Code)
#include <stdio.h>
int primeFactors(int num);
int main()
{
    int num;
    printf("enter number");
    scanf("%d", &num);

    int res = primeFactors(num);
}
// int isPrime(int number)
// {
//     if (number == 1)
//     {
//         return 0;
//     }
//     for (int i = 2; i < number; i++)
//     {
//         if (number % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

int primeFactors(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    while (n % 2 == 0)
    {
        printf("%d", 2);
        n = n / 2;
    }

    while (n % 3 == 0)
    {
        printf("%d", 3);
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            printf("%d", i);
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            printf("%d", i + 2);
            n = n / (i + 2);
        }
        if (n > 3)
        {
            printf("%d", n);
        }
    } 
}
//Time complexity: 
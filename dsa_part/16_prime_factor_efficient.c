// find prime factors of a number (Efficient Code)
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
    if(n<=1)
    {
        return 0;
    }
    for(int i=2; i*i<=n; i++)
    {
        while(n%i==0){
            printf("%d", i);
            n=n/i;
        }
    }
    if(n>1)
    {
        printf("%d",n);
    }
}
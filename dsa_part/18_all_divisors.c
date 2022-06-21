//program to print all divisors of a number.
#include <stdio.h>
int allDivisors(int num);
int main()
{
    int num;
    printf("enter number");
    scanf("%d", &num);

    int res = allDivisors(num);
    // printf("%d", res);
}

int allDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            printf("%d ", i);
        }
}
}
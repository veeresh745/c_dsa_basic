// function to print fibonacci sequence.
//* 0  1  1  2  3  5  8  13  21  ... .. . . . . .
//* fib(n) = fib(n-1) + fib(n-2)
#include <stdio.h>
int fib(int n);

int main()
{
    printf("fibonacci series %d\n", fib(6));

    return 0;
}

int fib(int n)
{
    //* fib(n) = fib(n-1) + fib(n-2)

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibnm1 = fib(n - 1);
    int fibnm2 = fib(n - 2);
    int fibn = fibnm1 + fibnm2;
   // printf("Fib of %d is : %d\n", n, fibn);    //to see detailed steps
    return fibn;
}

// program to print fibonacci number.
// fibonacci number : 0 1 1 2 3 5 8 13 .. . . .
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number (n>2) \n");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d \t%d \t", fib[0], fib[1]);   //printing the existing one
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2]; // main concept behind
        printf("%d\t", fib[i]);
    }
    return 0;
}
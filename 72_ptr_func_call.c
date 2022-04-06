// call by value: we pass value of variable as argument.
// call by refrence: We pass address of variable as argument.
#include <stdio.h>

void square(int n);
int main()
{
    int number = 4;
    square(number);
    printf("Number = %d\n", number);
    return 0;
}

void square(int n)
{
    n = n * n;
    printf("Square = %d\n", n);
}
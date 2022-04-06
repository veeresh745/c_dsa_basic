// call by value: we pass value of variable as argument.
// call by refrence: We pass address of variable as argument.
#include <stdio.h>

void square(int n);
void _square(int *n);
int main()
{
    int number = 4;
    square(number);
    printf("Number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);
    return 0;
}
// call by value
void square(int n)
{
    n = n * n;
    printf("Square = %d\n", n);
}

//call by refrence
void _square(int *n)
{
    *n = (*n) * (*n);      //4*4
    printf("Square = %d\n", *n);
}
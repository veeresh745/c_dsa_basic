// print the factorial of a number n.
#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter any number whose factorial you want :\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of the entered number is =%d\n", fact);
    return 0;
}
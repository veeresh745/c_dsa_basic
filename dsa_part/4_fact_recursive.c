//program to find factorial of a number using recursion.
#include <stdio.h>
int fact(int x);
int main()
{
    int x;
    printf("Enter a number whose factorial you are looking for ");
    scanf("%d", &x);

    int f = fact(x);
    printf("%d",f);
}

//using recursion
int fact(int n)
{
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
//Time complexity: theta(n)
                // theta (1) oxcillary space
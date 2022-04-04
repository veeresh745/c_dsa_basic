// Take a number(n) from user & output its cube(n*n*n).
#include <stdio.h>
int main()
{
    int n;      //taking one number from the user
    printf("Enter any number \n");
    scanf("%d", &n);
    //calculations and result 
    printf("Cube of the entered number is = %d\n", n * n * n);
    return 0;
}

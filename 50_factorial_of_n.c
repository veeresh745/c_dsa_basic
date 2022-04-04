// factorial of n
#include <stdio.h>
int facto(int n);
int main()
{
    int m;
    printf("Enter the number whose factorial you want\n");
    scanf("%d", &m);
    printf("Factorial is %d\n", facto(m));
    return 0;
}
// recursive function
int facto(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int factnm1 = facto(n - 1); // factorial of n-1
    int factn = factnm1 * n;    // factonial of n

    return factn;
}
// program to check whether a given number is palindrome or not.
#include <stdio.h>
#include <stdbool.h>
bool isPal(int x);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    
    bool s = isPal(x);
    printf("%d", s);

}

bool isPal(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    return (rev == n);
}
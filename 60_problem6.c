/*Write a program to check if a given number is
Armstrong number or not.
*/
/*armstrong number: if sum of individual digits of a 
number is equal to that digit itself, then the numebr is 
armstrong.*/

#include <stdio.h>
int main()
{
    int n, r, c, sum = 0, temp;
    printf("Enter any value: \n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        c = r * r * r;
        sum = sum + c;
        n = n / 10;
    }
    n = temp;
    if (n == sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not an armstrong");
    }
}
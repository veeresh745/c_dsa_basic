// Write a program to print prime numbers in a range.
#include <stdio.h>
int main()
{
    int ri, rf, i;
    printf("Enter your initial range: \n");
    scanf("%d", &ri);

    printf("Enter your final range: \n");
    scanf("%d", &rf);

    for (i = ri; i <= rf; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }
}
 
    
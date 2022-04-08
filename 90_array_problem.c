/* write a function to count the number of odd
numbers in an array*/
#include <stdio.h>
int oddCount(int num[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", oddCount(arr, 6));
    return 0;
}

int oddCount(int num[], int n)
{

    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (num[i] % 2 != 0)
        { // odd
            count++;
        }
    }
    return count;
}
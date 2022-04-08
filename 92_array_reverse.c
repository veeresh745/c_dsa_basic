// write a function to reverse an array.
#include <stdio.h>
int arrayRev(int num[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    // printf("%d", arrayRev(arr, 6));
    arrayRev(arr, 5);
    return 0;
}

int arrayRev(int num[], int n)
{
    for (int i = n; i >= 0; i--)
    {
        printf("%d\n", num[i]);
    }
}

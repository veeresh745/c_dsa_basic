// find only odd reccurence
#include <stdio.h>
int findMiss(int arr1[], int m);
int main()
{
    int m;
    printf("How many numbers do you want to enter");
    scanf("%d", &m);
    int arr1[100];
    printf("Enter array elements");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int x = findMiss(arr1, m);
    printf("Here it is :%d", x);
}

int findMiss(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n-1; i++)
    {
        res = res ^ arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        res = res ^ i;
    }
    return res;
}
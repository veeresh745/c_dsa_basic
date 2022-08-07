#include <stdio.h>
int main()
{
    int n;
    printf("How many numbers do you want to enter");
    scanf("%d", &n);

    int arr[100];
    printf("Enter array elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            // printf("here is the val:%d\n", arr[i]);
            return arr[i];
        }
    }
}
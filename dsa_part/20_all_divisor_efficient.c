// program to print all divisors of a number (most Efficient).
#include <stdio.h>
int allDivisors(int num);
int main()
{
    int num;
    printf("enter number");
    scanf("%d", &num);

    int res = allDivisors(num);
    // printf("%d", res);
}

int allDivisors(int n)
{
    int i;
    for(i = 1; i*i<n; i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }

    for(; i>=1; i--){ 
        if(n%i==0)
        {
            printf("%d ", n/i);
        }
    }
}


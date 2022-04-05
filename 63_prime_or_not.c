/* Write a program to check if a number is prime or not.
prime number -number having two factor
73,939,133
1987, 1993, 1999
*/
#include <stdio.h>
#include<math.h> 
int main()
{
    int n,count=0;
    printf("Enter any number to check\n");
    scanf("%d", &n);
    //we are checking if any number having two factor
    for (int i=1; i<=n; i++)      
    {
        if(n%i==0)           //checking here
        {
            count++;        //counting how many times we are getting remainder 0
        }

    }
    if(count==2){                       //if we are having more than two factor then it's a prime number
        printf("It's a prime number\n");
    }
    else{
        printf("Not a prime number\n");
    }
}

    
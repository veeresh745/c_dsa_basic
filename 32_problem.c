/*keep taking numbers from user until user enters an
odd number*/

#include <stdio.h>
int main()
{
    int num;
    do{
        printf("Enter number please\n"); 
        scanf("%d", &num);
    }while(num%2==0);                  //checks whether enterd number is even
    printf("OH ho! You just entered odd number");
}
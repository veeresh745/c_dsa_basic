#include<stdio.h>
int main()
{
    int number;
    printf("enter any number please\n");
    scanf("%d", &number);

    if(number >= 0){
        printf("positive number \n");

        if(number % 2==0){
            printf("entered number is even");
        }
            else {
                printf("entered number is odd");
            }

            }
        else{
            printf("Entered number is negative \n");

        }
}
    


/* keep taking numbers as input from user until user
enters a number which is multiple of 7.*/

#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter number please\n");
        scanf("%d",&num);
    }while(num%7==0);
    return 0;
}
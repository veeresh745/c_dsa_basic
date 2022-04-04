//Write a program to print the average of 3 numbers.
#include<stdio.h>
int main(){
    int a, b, c, avg;
    printf("Enter Three digits simultaneously \n");
    scanf("%d %d %d", &a,&b,&c);

    avg = (a+b+c)/3;

    printf("Average of entered number is = %d\n", avg);
    return 0;
}
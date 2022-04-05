//Write a function to find square root of a number.
#include<stdio.h>
#include<math.h>
int sroot(int n);
int main(){
    int n;
    printf("Enter any number whose square root you want\n");
    scanf("%d", &n);

    printf("square root of %d is %d\n", n, sroot(n));
}

int sroot(int num){
    int sqroot;
    sqroot=sqrt(num);
    return sqroot;
}
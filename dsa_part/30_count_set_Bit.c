#include<stdio.h>
#include<limits.h>
int CountsetBit(int m);
int main(){
    int j = CountsetBit(15);
    printf("%d", j);
}

int CountsetBit(int n){
    int count = 0;
    while(n>0){
        if(n%2!=0){
            count++;
        }
        n=n/2;
    }
    return count;
}
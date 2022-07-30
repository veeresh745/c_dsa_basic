#include<stdio.h>
int CountsetBit(int m);
int main(){
    int j = CountsetBit(15);
    printf("%d", j);
}

int CountsetBit(int n){
    int count = 0;
    while(n>0){
        count = count+(n&1);
        
        n=n>>1;
    }
    return count;
}
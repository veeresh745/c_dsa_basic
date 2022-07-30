#include<stdio.h>
int setBit(int m, int n);
int main(){
    setBit(5,1);
}

int setBit(int n, int k){
    if(n>>(k-1) & 1) 
    {
        printf("Yes");
    }
    else{
        printf("no");
    }

}
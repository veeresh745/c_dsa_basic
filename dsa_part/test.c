#include<stdio.h>
int power_Two(int m);
int main(){
    int result,m;
    printf("Enter value");
    scanf("%d", &m);
    result = power_Two(m);
    printf("%d", result);
    return 0;
}
 
int power_Two(int n){
    if(n==1){
        return 1;
    }   
    while(n != 1){
        n=n/2;
    }
}
//print table of a number.
#include<stdio.h>
int table(int n);
int main(){
    int n;
    printf("Enter any number whose table you want\n");
    scanf("%d",&n);

    table(n);
return 0;
}

int table(int x){  //parameter /formal parameter
    for(int i=1;i<=10;i++){
        printf("%d\n",i*x);
    }
}

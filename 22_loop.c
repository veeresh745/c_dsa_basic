#include<stdio.h>
int main(){
    //incement operator
    //++i  preincrement 
    //i++  post increment

    //--i pre decrement
    //i-- post decrement
 
    int i=1;
    printf("%d\n", i++); //use then increase
    printf("%d\n", i);

    printf("%d\n", ++i);   //increase then use
    printf("%d\n", i);


    printf("%d\n", --i);
    printf("%d\n", i);

    return 0;
}
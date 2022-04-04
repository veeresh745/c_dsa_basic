//When a function calls itself, it's called recursion.
//print hello world 5 times.
#include<stdio.h>
void printhw(int count);
int main(){
    printhw(5);
    return 0;

}

//recursive function
void printhw(int count){
    if(count == 0){
        return ;
    }
    printf("Hello World!\n");
    printhw(count-1);
}
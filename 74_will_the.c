// will the address output be same?
//No. Althought it is call by value, but after execution of the function
//a copy will made and it will have diffrent address
#include <stdio.h>

void printAddress(int n);

int main()
{
    int n = 5;
    printf("%p\n", &n);
    printAddress(n);
    return 0;
}
//call by value
void printAddress(int n){
    printf("%p\n", &n);
}
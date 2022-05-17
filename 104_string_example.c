/*string using pointers:- 1. can be reinitialized(can change value later)
                          2. store string in memory and the assigned address is stored in the 
                             char pointer 'str
                          3.  in array we can't reinitialize the string
*/
#include<stdio.h>
int main(){
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello World";
    canotChange = "HelloWordl";              //This will throw error as can't be reinitialized.
    return 0;
}
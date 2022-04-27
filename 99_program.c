/*ask the user to enter their firstName 
and print it back to them, also try with their full name*/

#include<stdio.h>
void printString(char arr[]);
int main(){
    char fullName[100];
    gets(fullName);          //%s automatically adds '\0'
    puts(fullName); //scanf() cannot input multi-word strings with spaces
    return 0;                            //gets() and puts() used for that
}


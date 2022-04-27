/*make a program thata inputs user's name 
and prints its length.*/
#include<stdio.h>
int main(){
    char username[100];
    fgets(username, 100, stdin);
    puts(username);
    printf("%s",len(username));
}

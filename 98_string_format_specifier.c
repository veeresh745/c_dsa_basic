/*create a string first name and last name
to store details of user
and print all the charater format specifier*/
#include<stdio.h>
void printString(char arr[]);
int main(){
    char name[50];
    scanf("%s", name);          //%s automatically adds '\0'
    printf("your name is %s", name);
    return 0;

}

void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }
    printf("\n");
}
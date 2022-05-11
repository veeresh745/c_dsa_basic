/*Ask the user to enter their firsrtName 
and print it back to them. And full name
*/
//
#include<stdio.h>
void printString(char arr[]);
int main(){
    // char firstName[50];
    // scanf("%s", firstName);          //%s automatically adds '\0'
    // printf("your name is %s", firstName);
    char fullName[100];
    scanf("%s",fullName);
    printf("Your full name is : %s", fullName);

    return 0;
}
void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

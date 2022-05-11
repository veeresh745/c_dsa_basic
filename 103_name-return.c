/*Ask the user to enter their firsrtName 
and print it back to them. And full name
*/
//we will use gets() and puts() also fgets()
//fgets(str,n,file)- string,file,standard i/o
#include<stdio.h> 
void printString(char arr[]);
int main(){
    // char firstName[50];
    // scanf("%s", firstName);          //%s automatically adds '\0'
    // printf("your name is %s", firstName);
    char str[100];
    gets(str);
    puts(str);

    return 0;
}
void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

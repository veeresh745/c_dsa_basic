// pointer to pointer
/*int **pptr;
char **pptr;
float **pptr;
*/
//print the value of 'i' from its pointer to pointer
#include<stdio.h>
int main(){
    int i =5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n", **pptr);
    printf("%d\n", *ptr);
    return 0;
}
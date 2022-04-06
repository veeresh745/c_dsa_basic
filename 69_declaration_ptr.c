/*
int *ptr;
char *ptr;
float *ptr;
*/
/* Format Specifier:
printf("%p", &age);
printf("%p", ptr);
printf("%p", &ptr);
*/
#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;

    // address
    // printf("%p\n", &age);
    printf("%u\n", &age); // converting in hexadecimal form to be
                          // able to read it and understand it.
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
    printf("age: %d\n", age);
    printf("%d\n", *ptr);    // same
    printf("%d\n", *(&age)); // same

    return 0;
}

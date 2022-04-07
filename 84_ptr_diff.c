// trying pointers of different types
// pointers should be of same types, otherwise we will get error
//we are not getting difference of numbers, instead we are getting difference of places, or say addresses.
#include <stdio.h>
int main()
{
    int age = 22;
    char _age = 'a';
    int *ptr = &age;
    char *_ptr = &_age;

    printf("Difference = %u\n", ptr - _ptr);
    _ptr = &age;
    printf("Comparison = %u\n", ptr == _ptr);
    return 0; // output will be 1, means true
}
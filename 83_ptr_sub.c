// we can substract and compare two pointers
#include <stdio.h>
int main()
{
    int age = 22;
    int _age = 23;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("Difference = %u\n", ptr - _ptr);
    _ptr = &age;
    printf("Comparison = %u\n", ptr == _ptr);
    return 0;             //output will be 1, means true
}
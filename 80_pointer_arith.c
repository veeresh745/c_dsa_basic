// pointer can be incremented and decremented
#include <stdio.h>
int main()
{
    int age = 21;     
    int *ptr = &age;
    printf("PTR = %u\n", ptr);
    ptr++;

    printf("ptr = %u\n", ptr);

    ptr--;
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}
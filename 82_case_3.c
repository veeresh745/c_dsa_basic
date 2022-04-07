// pointer can be incremented and decremented
#include <stdio.h>
int main()
{
    char star = '*';       //char have size of 1 byte
    char *ptr = &star;
    ptr++;
    printf("PTR = %u\n", ptr);
    ptr++; 

    printf("ptr = %u\n", ptr);

    ptr--;
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}
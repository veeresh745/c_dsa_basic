// pointer can be incremented and decremented
#include <stdio.h>
int main()
{
    float price = 100;
    float *ptr = &price;
    printf("PTR = %u\n", ptr);
    ptr++;

    printf("ptr = %u\n", ptr);

    ptr--;
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}
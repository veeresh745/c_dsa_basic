/*Write a function to print "Hot" or "Cold" depending
on the temperature user enters.*/
#include <stdio.h>
int tempcheck(int temp);
int main()
{
    int temp;
    printf("Enter temperature to check if it's hot or cold\n");
    scanf("%d", &temp);

    printf("%c", tempcheck(temp));
}
int tempcheck(int tc)
{ // we are making simple function so for simplicity
    if (tc < 0)
    { // we are just assuming hot or cold if temp is less than 0 or greater
        printf("COLD\n");
    }
    else
    {
        printf("HOT\n");
    }
}
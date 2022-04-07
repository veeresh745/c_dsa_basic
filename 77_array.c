/*Array: collection of similar data tyoes
stored at contiguous memory locations.

syntax:
int marks[3];
char name[10];
float price[2];

Input and output:
scanf("%d", &marks[0]);
*/

#include <Stdio.h>

int main()
{
    // int marks1 = 97;
    // int marks2 = 99;
    // int marks3 = 105;

    int marks[3];
    printf("Enter phy :");
    scanf("%d", &marks[0]);
    printf("Enter chem :");
    scanf("%d", &marks[1]);
    printf("Enter maths :");
    scanf("%d", &marks[2]);

    printf("physics: %d chemistry: %d maths: %d", marks[0], marks[1], marks[2]);
    return 0;
}
/*Write a program ti check if a student passed or failed.
marks > 30 is PASS
marks <= 30 is FAIL
*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter you marks please\n");
    scanf("%d", &marks);

    marks <= 30 ? printf("FAIL\n") : printf("PASS\n");

    return 0;
}
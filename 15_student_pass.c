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

    if (marks >= 0 && marks <= 30)         //considered safe cases
    {
        printf("FAIL\n");
    }
    else if (marks > 30 && marks <= 100)
    {
        printf("PASS\n");
    }
    else
    {
        printf("Wrong Marks Entered");
    }
    return 0;
}

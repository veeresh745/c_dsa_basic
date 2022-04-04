// write a function to calculate percentage of a student, given marks
#include <stdio.h>
int calcpercentage(int science, int math, int computer);

int main()
{
    int sc = 90, maths = 98, cs = 88;
    printf("percentage : %d\n", calcpercentage(sc, maths, cs));

        return 0;
}

int calcpercentage(int science, int math, int computer)
{
    return ((science + math + computer) / 3);
}
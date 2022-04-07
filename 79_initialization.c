/*
int marks[] = {99,100,89};
int marks[3]= {98, 99, 78};
*/
#include <Stdio.h>
int main()
{
    float price[] = {100.0, 210.0, 300.0};   //can be initialied directly here
    printf("Total price 1 : %f\n", price[0] + (0.18 * price[0]));
    printf("Total price 2 : %f\n", price[1] + (0.18 * price[1]));
    printf("Total price 3 : %f\n", price[2] + (0.18 * price[2]));

    return 0;
}
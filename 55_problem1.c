/*Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.*/
#include <stdio.h>
int main()
{
    int a, b, peri;        //taking sides as a and b and perimeter as peri
    printf("Enter first side\n");
    scanf("%d", &a);

    printf("Enter second side\n");
    scanf("%d", &b);

    peri = 2 * (a + b);      //calculating using formula

    printf("perimeter of the rectangle is %d\n", peri);  //show the results
    return 0;
}

//Contribution by veeresh soni
//https://www.linkedin.com/in/veeresh-soni/
//print the table of a number input by the user.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number whose table you want: ");
    scanf("%d",&num);
    for(int i=1; i<=10; i++)
    {
        printf(" %d\n", num*i);   //num multiply by i as i increases acc. to table
        
    }
    return 0;
}
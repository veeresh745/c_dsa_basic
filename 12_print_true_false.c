#include<stdio.h>
int main()
{
    int isSunday=1;
    int isSnowing=1;

    int isMonday=0;
    int isRaining=1;

    int x;
    printf("Enter number : ");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
    

    printf("%d\n",isSunday && isSnowing);
    printf("%d\n", isMonday || isRaining);
    return 0;
}
#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        printf("values in the loop : %d\n", i);
         if(i==3){                     //loop will stop when value of i reaches to 3
             
             break;
         }
    }
    printf("END");
    return 0;
}
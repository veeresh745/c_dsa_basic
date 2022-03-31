#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)           //i is supposed to reach the value of 5 , but we will stop at 3
    {
        printf("values in the loop : %d\n", i);
         if(i==3){                     //loop will stop when value of i reaches to 3
             
             break;
         }
    }
    printf("END");
    return 0;
}
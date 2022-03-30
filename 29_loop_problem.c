/*print the sum of first n natural numbers. 
and also, print them in reverse*/

#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter any number here \n");
    scanf("%d",&num);

    for(int i=0 ,j=num; i<=num&&j>=1; i++,j--){     //we can do this same thing in a single loop

        sum=sum+i;
        printf("%d\n", j);
        
    }
    printf("Sum = %d\n", sum);

    // printf("Printing numbers in reverse : \n");
    // for(int i=num; i>=1; i--){
    //     printf("%d\n", i);
    // }


    return 0;

}
#include<stdio.h>
int main()
{
    // *,/,%            --->  first priority
    // +, -             ---> second priority
    //= assignment      ---> third priority

    int a = 4+9*10;     //expected 94 acc. bodmas rule
    printf("%d\n",a);

    //associativity rule (left to right) for same precedence 
    int x=4*3/6*2;              //left to right

    //((4*3)/6)*2                This is the way
    printf("answer for x = %d",x);


    return 0;
}

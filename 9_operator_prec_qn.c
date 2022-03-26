#include<stdio.h>
int main()
{

    //declaration
    int a=5*2-3*2;           //(5*2)-(3*2)= 10-6 expected
    int b= 5*2/2*3;          //((5*2)/2)*3 expedted  //associativity used
    int c=5*(2/2)*3;         //5*(1)*3 solve bracket first if present
    int d= 5+2/2*3;          //5+((2/2)*3)= 5+3=8 expected


    //printing things 
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    return 0;
}
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age");
    scanf("%d",&age);

    if(age>18){                         //condition check
        printf("adult\n");
        printf("They can vote\n");
        printf("They can drive as well\n");
    }
    else if(age>13 && age <18){
        printf("Teenager\n");

    }
    else{
        printf("child\n");
    }
    printf("Thank You!");
    return 0;
}
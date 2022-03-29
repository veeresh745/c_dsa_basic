#include<stdio.h>
int main()
{

    for(float i=1.0; i<=5.0; i++)     //iterator can be float as well
    {
        printf("%f\n", i);
    }

    for (char ch='a'; ch<='z'; ch++)    //iterator counter can be characters
    {
        printf("%c\n", ch);
    }

    return 0;
}
// function to convert celcius to fahrenheight.
#include <stdio.h>
float cel_fah(float cel);
int main()
{
    float cel;
    printf("Enter Celcius temperature\n");
    scanf("%f", &cel);
    printf("Fahrenheight temperature: %f\n", cel_fah(cel));

    return 0;
}

float cel_fah(float temp)
{
    float fah = (temp * 1.8) + 32;
    return fah;
}
//function to calculate area of a square, circle, and a rectangle.
#include<stdio.h>
#include<math.h>
float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b);

int main(){
    float a=5.0;
    float b=10.0;

    printf("Area of rectangle is: %f\n", rectanglearea(a,b));
    printf("Area of Circle is =%f\n", circlearea(5.0));
    printf("Area of square is = %f\n", squarearea(4.0));
    return 0;
}

float squarearea(float side){
    return side*side;
}

float circlearea(float rad){
    return 3.14*rad*rad;
}

float rectanglearea(float a, float b){
    return a*b;
}
//function to calculate area of a square, circle, and a rectangle.
#include<stdio.h>
int areasqaure();
float areacircle();
int arearecatangle();

int main(){
    int side,siderect1,siderect2;
    float  radius;
    printf("Enter side of square\n");
    scanf("%d", &side);

    printf("Enter sides of rectangle\n");
    scanf("%d,%d", &siderect1,&siderect2);

    printf("Enter radius of a circle");
    scanf("%f", &radius);

    int areasq= areasquare(side);
    int areacir=areacircle(radius);
    int arearect=arearectangle(siderect1,siderect2);
   
    printf("Area of side is =%d\n", areasq);
    printf("area of circle is =%f\n", areacir);
    printf("Area of rectangle is = %d\n", arearect);

    


}

int areasquare(int s){
    return s*s;

}

float areacircle(float r){
    return 3.14*r*r;

}

int arearectangle(int a, int b){
    return a*b;

}
// program to find greatest common divisor using euclidian optimized algorithm/
#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int x, y;
    printf("Enter numbers");
    scanf("%d %d", &x, &y);
    

    int result = gcd(x, y);
    printf("%d", result);
   
}

int gcd(int a, int b)
{
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }

}
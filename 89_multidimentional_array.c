/* 2d arrays
int arr[][] = {{1,2}. {3,4}};
*/
#include<Stdio.h>
int main(){
    //2x3
    int marks[2][3];  //---  | ---
    marks[0][0] = 90;
    marks[0][1] = 100;
    marks[0][2] = 98;

    marks[1][0] = 90;
    marks[1][1] = 98;
    marks[1][2] = 90;

    printf("%d", marks[0][0]);    //loop canbe used to print all the marks
    
    return 0;
}
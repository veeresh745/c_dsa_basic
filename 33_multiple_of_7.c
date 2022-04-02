/* keep taking numbers as input from user until user
enters a number which is multiple of 7.*/
//break will take you out if you used nested loop 
#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter number please\n");
        scanf("%d",&num);

        if(num%7 == 0){
            break;
        }
    }while(1);
    printf("Yup you just entered a number that is multiple of 7");
    return 0;
}
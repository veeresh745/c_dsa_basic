//do while runs at least one time
#include<stdio.h>
int main(){
    int i=1;
    int j=5;
printf("increment here\n");
do{
    
    printf("%d\n", i);
    i++;                //increment
}while(i<=5);
printf("Decrement:  \n");

do{
    
   printf("%d\n", j);
   i--;
}while(i>=1);

return 0;
}
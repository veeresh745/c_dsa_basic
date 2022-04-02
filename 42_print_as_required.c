//function that prints namaste if user is indian & bonjour if the user is french.
#include<stdio.h>
void printnamaste();
void printbonjour();

int main(){
    int n;
    printf("Please choose 1 if you are indian or else 0 if french\n");
    scanf("%d",&n);
    if(n==1){
        printnamaste();
    }
    else if(n==0){
        printbonjour();
    }
    else{
        printf("You have entered invalid option");
    }
   
    return 0;
}

void printnamaste(){
    printf("Namaste\n");
}

void printbonjour(){
    printf("Bonjour");
}
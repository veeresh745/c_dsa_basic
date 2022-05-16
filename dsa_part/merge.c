//program to implement merge sort
#include<stdio.h>
int main(){
    int a[10],n,k,i,j;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the unsorted array is\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    printf("the sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
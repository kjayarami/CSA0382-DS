#include<stdio.h>
int main(){
    int i,size;
    printf("Enter the size of an array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements into the array : ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\nEven numbers are : ");
    for(i=0;i<size;i++){
        if(array[i]%2 == 0){
            printf("%d\t",array[i]);
        }
    }
    printf("\n Odd numbers are : ");
    for(i=0;i<size;i++){
        if(array[i]%2 != 0){
            printf("%d\t",array[i]);
        }
    }
}
#include<stdio.h>
int main(){
    int size,prev,curr;
    printf("\nEnter the size of an array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements into the array : ");
    for(int i = 0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(int i = 1;i<size;i++){
        curr = array[i];
        prev = i-1;
        while(prev >= 0 && array[prev]>curr){
            array[prev+1] = array[prev];
            prev--;
        }
        array[prev+1] = curr;
        printf("\nAfter %d iteration : ",i);
        // int iteration = 6;
        for(int k =0;k<size;k++){
            // if(iteration == i){
            printf("%d\t",array[k]);
            // }
        }
    }
    printf("\nsorted array : ");
    for(int i = 0;i < size;i++){
        printf("%d\t",array[i]);
    }
}
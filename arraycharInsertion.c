#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    int size;
    printf("\nEnter the size of an array : ");
    scanf("%d",&size);
    getchar();
    char array[size],array2[size+1];
    printf("Enter elements into the array : ");
    for(int i = 0;i<size;i++){
        scanf(" %c",&array[i]);
    }
    int position;
    printf("\nEnter a position to insert : ");
    scanf("%d",&position);
    getchar();
    char key;
    printf("\nEnter the key to insert into the array : ");
    scanf("%c",&key);
    if(position>size+1 || position<0){
        printf("\nInsertion is not possible..");
    }else{
    for(int i=0;i<=size;i++){
        if(position == i){
            array2[position] = key;
        }else if(position>i){
            array2[i] = array[i];
        }else{
            array2[i] = array[i-1];
        }
    }
    }
    printf("\nAfter insertion key %c is : ",key);
    for(int i = 0;i<size+1;i++){
        printf(" %c ",array2[i]);
    }
}
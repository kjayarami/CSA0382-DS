#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
void main(){
    char array1[max];
    char array2[max];
    char array3[max];
    int i;
    printf("\nEnter the first string : ");
    gets(array1);
    printf("\nEnter the second string : ");
    gets(array2);
    printf("\nFirst string is : ");
    for(i=0;i<strlen(array1);i++){
        printf(" %c ",array1[i]);
    }
    printf("\nSecond string is : ");
    for(i=0;i<strlen(array2);i++){
        printf(" %c ",array2[i]);
    }    
    int size = strlen(array1)+strlen(array2);
    printf("\nsize of first string is : %d",strlen(array1));
    printf("\nsize of second string is : %d",strlen(array2));
    printf("\nsize of two stings : %d",size);
    for(i=0;i<size;i++){
        if(i<strlen(array1)){
            array3[i] = array1[i];
        }else{
            array3[i] = array2[i-strlen(array1)];
        }
    }
    printf("\nAfter merging two strings : ");
    for(i=0;i<size;i++){
        printf(" %c ",array3[i]);
    }
}
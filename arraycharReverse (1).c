#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
void main(){
    char array[max];
    printf("\nEnter the string : ");
    gets(array);
    printf("\nOriginal String : ");
    for(int i = 0;i<strlen(array);i++){
        printf("%c",array[i]);
    }
    for(int i = 0;i<strlen(array)/2;i++){
        int temp = array[i];
        array[i] = array[strlen(array) - 1 - i];
        array[strlen(array) - 1 - i] = temp;
    }
     printf("\nReversed String : ");
    for(int i = 0;i<strlen(array);i++){
        printf("%c",array[i]);
    }
}
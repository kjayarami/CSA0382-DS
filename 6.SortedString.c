#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
int main(){
		char array[max];
		printf("\nEnter a expression : ");
		gets(array);
		char temp;
		int i,j;
		for(i = 0;i<strlen(array);i++){
			for(j=i+1;j<strlen(array);j++){
				if(array[i]>array[j]){
					temp =array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
		printf("\nSorted string is : ");
		for(i=0;i<strlen(array);i++){
			printf("%c",array[i]);
		}
		for(i=0;i<strlen(array);i++){
			if(array[i] == array[i+1]){
				printf("\nStarting index is %d",i);
				break;
			}
		}
}

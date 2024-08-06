#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
int main(){
	char array[max];
	printf("\nEnter a string : ");
	fgets(array,max,stdin);
	int i,j,count = 0;
	for(i=0;i<strlen(array)-1;i++){
		count = 0;
		for(j=0;j<strlen(array)-1;j++){
			if(array[i] == array[j]){
				count++;
			}
		}
		printf("\nFrequency of %c is %d",array[i],count);
	}
}

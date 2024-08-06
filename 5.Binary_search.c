#include<stdio.h>
int main(){
	int mid,size;
	printf("\nEnter the size of array : ");
	scanf("%d",&size);
	int high = size-1;
	int low = 0,i;
	int array[size];
	printf("\nEnter the elements into the array : ");
	for(i = 0;i<size;i++){
		scanf("%d",&array[i]);
	}
	int key,found = 1;
	printf("\nEnter the value to search : ");
	scanf("%d",&key);
	while(low<=high){
		mid = (low+high)/2;
		if(array[mid] == key){
			printf("%d is found at index of %d",key,mid);
			found++;
			break;
		}else if(array[mid]>key){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	if(found == 1){
		printf("%d is not exits in the array : ",key);
	}
}

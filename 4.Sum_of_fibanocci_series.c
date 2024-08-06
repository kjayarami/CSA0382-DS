#include<stdio.h>
int main(){
	int a = 0,b = 1;
	int sum = 0,i,c,n;
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	printf("\nFibanocci series : ");
	for(i=0;i<n;i++){
		c = a+b;
		printf(" %d ",a);
		sum += a;
		a = b;
		b = c;
		c = a;
	}
	printf("\nsum of fibanocci series : %d",sum);
}

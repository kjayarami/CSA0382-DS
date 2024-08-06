#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
	struct node{
		int data;
		struct node*next;
	};
	struct node *head,*new,*temp;
	int choice = 1,length,i;
	head = 0;
	while(choice){
		new = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter a data node : ");
		scanf("%d",&new->data);
		new->next = 0;
		if(head == 0){
			head = temp = new;
		}else{
			temp->next = new;
			temp = new;
		}
		printf("\nEnter 1 to continue or 0 to exit..");
		scanf("%d",&choice);
	}
	temp = head;
	while(temp!=0){
		printf(" %d ",temp->data);
		length++;
		temp = temp->next;
	}
	printf("\nLength of list is %d",length);
	printf("\nOdd numbers in list are : ");
	temp = head;
		while(temp!=0){
			if(temp->data%2 != 0){
			printf(" %d ",temp->data);
			}
		temp = temp->next;
	}
}

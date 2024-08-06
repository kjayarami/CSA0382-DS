#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *temp,*new;
    head = 0;
    int choice = 1,count=0;
    while(choice){
        new = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter a data node..");
        scanf("%d",&new->data);
        new->next = 0;
        if(head == 0){
            head = temp = new;
        }else{
            temp->next = new;
            temp = new;
        }
        printf("\npress 1 to continue or 0 to exit..");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next;
        count++;
    }
    struct node *nextnode;
    int i = 1,position;
    printf("\nLength of linked list is %d ",count);
    printf("\nEnter a position..");
    scanf("%d",&position);
    temp = head;
    if(position>count){
        printf("\nInvalid position..");
    }else{
    while(i<position-1){
        temp = temp->next;
        i++;
    }
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
    temp = head;
    while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}

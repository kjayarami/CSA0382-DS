#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*temp,*new;
    int choice = 1;
    head = 0;
    while(choice){
        new = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter a datanode..");
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
    printf("\nOriginal Linked list : ");
    temp = head;
    while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    struct node *prev_node,*current,*nextnode;
    prev_node = 0;
    current = nextnode = head;
    while(nextnode != 0){
        nextnode = nextnode->next;
        current->next = prev_node;
        prev_node = current;
        current = nextnode;
    }
    head = prev_node;
    printf("\nReversed linked list : ");
    temp = head;
    while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}

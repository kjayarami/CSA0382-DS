#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*temp,*new;
    int choice = 1,count = 0;
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
        printf("\npress 1 to contiune or 0 to exit..");
        scanf("%d",&choice);
    }
    temp = head;
   while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next; 
        count++;  
    }
    printf("\nLenght of list is %d",count);
    int pos,i=1,n=1;
    while(n){
        new = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter a position..");
        scanf("%d",&pos);
        temp = head;
        if(pos>count){
            printf("\nInvalid");
        }else{
            while (i<pos)
            {
               temp=temp->next;
               i++;
            }
        }
        printf("\nEnter a data..");
        scanf("%d",&new->data);
        new->next = 0; 
        new->next = temp->next;
        temp->next = new;
        printf("\npress 1 to continue or 0 to exit");
        scanf("%d",&n);
    }
    temp = head;
    while(temp!=0){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}

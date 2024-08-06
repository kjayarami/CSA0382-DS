#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
      int data;
      struct node *next;
    };
        struct node *head,*temp,*new;
        head = 0;
        int choice = 1;
        while(choice){
        printf("\nStack Operation..");
        printf("\n1.push..");
        printf("\n2.pop...");
        printf("\n3.Top...");
        printf("\n4.Display..");
        printf("\n5.Exit..");
        int operation;
        printf("\nEnter a operation : ");
        scanf("%d",&operation);
        if(operation == 1){
            new = (struct node*)malloc(sizeof(struct node));
            printf("\nEnter a datanode..");
            scanf("%d",&new->data);
            new->next = 0;
            new->next = head;
            head = new;
        }else if(operation == 2){
            if(head == 0){
                printf("\nList is empty...");
            }else{
                temp = head;
                head = temp->next;
                printf("\nPopped elements is %d",temp->data);
                free(temp);
            }
            }
        else if(operation == 3){
            if(head == NULL){
                printf("\nlist is empty...");
            }else{
                printf("\nTop of stack is %d",head->data);
            }
        }else if(operation == 4){
             if(head == 0){
                printf("\nList is empty...");
            }else{
        printf("\nElements in the stack are..");
        temp = head;
        while(temp != 0)
                    {
                        printf("\n %d ",temp->data);
                        temp = temp->next;
                     }
                }
        }
        else if(operation == 5){
            printf("\nExited from stack..");
            break;
        }else{
            printf("\nEnter proper operation..");
        }
      
    }
}

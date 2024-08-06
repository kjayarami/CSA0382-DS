#include<stdio.h>
int main(){
    int size;
    printf("\nEnter the size of stack..");
    scanf("%d",&size);
    int top = -1;
    int stack[size];
    while (1)
    {
        int choice,i;
        printf("\nStack Operations : ");
        printf("\n1.PUSH : ");
        printf("\n2.POP : ");
        printf("\n3.TOP : ");
        printf("\n4.Display elements in the stack : ");
        printf("\n5.EXIT: ");
        printf("\nEnter your choice..");
        scanf("%d",&choice);
        if(choice == 1){        //PUSH
            if(top == size-1){
                printf("\nStack is Overflowed...%d\n",top);
            }else{
                int push;
                printf("\nvalue of top is %d",top);
                printf("\nEnter a value to push : ");
                scanf("%d",&push);
                int n = ++top;
                stack[n] = push;
                printf("\nvalue of top is %d\n",n);
            }
        }else if(choice == 2){      //POP
                if(top == -1){
                    printf("\nStack is empty\n");
                }else{
                    printf("\nPopped element is %d...\n",stack[top]);
                    top--;
                }                
        }else if(choice == 3){      //TOP
                if(top == -1){
                    printf("\nStack is empty...\n");
                }else{
                    printf("\nTop of Stack is %d :\n ",stack[top]);
                    }
        }else if(choice == 4){      //DISPLAY
                if(top == -1){
                    printf("\nStack is empty...");
                }else{
                    printf("\nElements in stack are : ");
                    for(i=0;i<=top;i++){
                        printf(" %d ",stack[i]);
                    }
                }
                printf("\n");
        }else if(choice == 5){      //EXIT
        	printf("\nExited from Stack ...");
        	break;
		}else{
            printf("\nEnter proper operations..");
        }
    }
}
    
    

#include<stdio.h>
int main()
{
    int size;
    printf("\nEnter the size of queue..");
    scanf("%d",&size);
    int queue[size];
    int rare = -1, front = -1;
    while(1){
        printf("\nQueue Operations...");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\n4.IsFull");
        printf("\n5.Isempty");
        printf("\n6.Exit");
        int operation;
        printf("\nEnter a queue operation..");
        scanf("%d",&operation);
        if(operation == 1){         // ENQUEUE
            if(rare == size-1){
                printf("\nQueue is overflowed..rare point is at %d", rare);
            }else{
                int enqueue;
                printf("\nEnter an element into queue..");
                scanf("%d",&enqueue);
                if(front == -1){
                    front = 0;
                }
                queue[++rare] = enqueue;
                printf("\nPosition of rare is %d", rare);
                printf("\nPosition of front is %d",front);
            }
        }else if(operation == 2){   // DEQUEUE
            if(rare == -1){
                printf("\nQueue is Underflow..both rare and front are at index %d, %d",front,rare);
            }else{
                printf("\nDequeued element is %d", queue[front]);
                front++;
                if (front>rare) { 
                    front =rare= -1;
                }
                printf("\nPosition of rare is %d", rare);
                printf("\nPosition of front is %d",front);
            }
        }else if(operation == 3){   // DISPLAY
            if(rare == -1){
                printf("\nQueue is Empty..both rare and front are at index %d, %d",front,rare);
            }else{
                printf("\nElements in queue are..");
                for(int i = front; i <=rare; i++){
                    printf(" %d ", queue[i]);
                    }

                // printf("\nPosition of rare is %d", rare);
                // printf("\nPosition of front is %d",front);
            }
        }else if(operation == 4){   // IS FULL
            if(rare == size-1){
                printf("\nQueue is Full..");
            }else{
                printf("\nQueue is not Full..");
            }
            // printf("\nPosition of rare is %d", rare);
            // printf("\nPosition of front is %d",front);
        }else if(operation == 5){   // IS EMPTY
            if(rare == -1){
                printf("\nQueue is Empty..");
            }else{
                printf("\nQueue is not empty..");
            }
            // printf("\nPosition of rare is %d", rare);
            // printf("\nPosition of front is %d",front);
        }else if(operation == 6){   // EXIT
            printf("\nExited from Queue..");
            break;
        }else{
            printf("\nEnter proper operation..");
        }
    }
    return 0;
}

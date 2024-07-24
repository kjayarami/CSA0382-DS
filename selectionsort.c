#include<stdio.h>
int main(){
    int size,i,j,k,minIndex;
    printf("Enter the size of an array : ");
    scanf("%d",&size);
    printf("Enter the elements into the array : ");
    int data[size];
    for(i=0;i<size;i++){
        scanf("%d",&data[i]);
    }
    printf("Initital array : ");
    for(i=0;i<size;i++){
        printf(" %d ",data[i]);
    }
    printf("\n");
    for(i=0;i<size;i++){
        minIndex = i;
        for(j=i;j<size;j++){
            if(data[j]<data[minIndex]){
                minIndex = j;
                int temp = data[i];
                data[i] = data[minIndex];
                data[minIndex] = temp;
            }
        }
        printf("After itereation %d :",i+1);
        for(k=0;k<size;k++){
            printf(" %d ",data[k]);
        }
        printf("\n");
    }
    printf("Selection sort : ");
    for(i=0;i<size;i++){
        printf(" %d ",data[i]);
    }
}
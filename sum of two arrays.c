#include<stdio.h>
#include<stdlib.h>
int main(){
    int size1,size2;
    int sum = 0,sum1 = 0,sum2 = 0;
    int data1[size1];
    printf("\nEnter the size of first array..");
    scanf("%d",&size1);
    int i;
    printf("\nEnter elements into the first array..");
    for(i=0;i<size1;i++){
        scanf("%d",&data1[i]);
    }
    printf("\nEnter the size of second array..");
    scanf("%d",&size2);
    int data2[size2];
    printf("\nEnter elements into the second array..");
    for(i=0;i<size2;i++){
        scanf("%d",&data2[i]);
    }
    printf("\nElements in the first array is..");
    for(i=0;i<size1;i++){
        printf(" %d ",data1[i]);
    }
    printf("\nElements in the second array is..");
    for(i=0;i<size2;i++){
        printf(" %d ",data2[i]);
    }
    for(i=0;i<size1;i++){
        sum1 += data1[i];
    }
    printf("\nSum of first array is..%d",sum1);
    for(i=0;i<size2;i++){
        sum2 += data2[i];
    }
    printf("\nsum of second array is..%d",sum2);
    printf("\nSum of two array is %d",sum = sum1+sum2);
}

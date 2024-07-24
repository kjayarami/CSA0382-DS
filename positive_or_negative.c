#include<stdio.h>
int main(){
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    if(num>0){
        printf("\nGiven number %d is positive..\n",num);
    }else if(num<0){
        printf("\nGiven number %d is negative..\n",num);
    }else{
        printf("\nGiven number %d is neither positive nor negative..\n",num);
    }
}
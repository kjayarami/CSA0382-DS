#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact = fact*i;
    }
    printf("Factorial of a given number %d is %d",num,fact);
}
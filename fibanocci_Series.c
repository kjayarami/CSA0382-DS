#include <stdio.h>
int main() {
    int a = 0, b = 1, c, num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci series: "); 
    for (i = 0; i < num; i++) {  
        c = a + b;
        printf("%d\t", a);
        a = b; 
        b = c;
    }
}


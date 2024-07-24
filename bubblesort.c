#include <stdio.h>

int main() {
    int size, i,k, j;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    int data[size];
    
    printf("Enter the elements into the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
//            printf("i: %d, j: %d, data[j]: %d, data[j+1]: %d\n", i, j, data[j], data[j+1]);
            if (data[j] > data[j+1]) {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
        // Printing the array after each outer loop iteration
        printf("Array after iteration %d: ", i + 1);
        for ( k = 0; k < size; k++) {
            printf("%d ", data[k]);
        }
        printf("\n");
    }

    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}


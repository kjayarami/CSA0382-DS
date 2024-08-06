#include <stdio.h>

int main() {
    int size = 0, i, choice;
    int array[100];
    int key, position;
    int array2[100];
    int num, notfound;

    while (1) {
        printf("\nMenu : ");
        printf("\n1. Create an array : ");
        printf("\n2. Insert an element into an array : ");
        printf("\n3. Delete an element from an array : ");
        printf("\n4. Display elements in an array : ");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("\nExited from arrays...\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter the size of the array: ");
                scanf("%d", &size);
                printf("Enter the elements of the array: ");
                for (i = 0; i < size; i++) {
                    scanf("%d", &array[i]);
                }
                break;

            case 2:
                if (size == 0) {
                    printf("Array is not initialized.\n");
                    break;
                }
                printf("\nEnter the number to insert into the array: ");
                scanf("%d", &key);
                printf("\nArray size is %d", size);
                printf("\nGive new element index in the range 0 to %d: ", size);
                printf("\nEnter the index: ");
                scanf("%d", &position);
                if (position > size || position < 0) {
                    printf("Insertion is not possible at this index.\n");
                } else {
                    for (i = 0; i <= size; i++) {
                        if (i < position) {
                            array2[i] = array[i];
                        } else if (i == position) {
                            array2[i] = key;
                        } else {
                            array2[i] = array[i - 1];
                        }
                    }
                    size++;
                    for (i = 0; i < size; i++) {
                        array[i] = array2[i];
                    }
                }
                break;

            case 3:
                if (size == 0) {
                    printf("Array is not initialized.\n");
                    break;
                }
                printf("\nEnter a number to delete: ");
                scanf("%d", &num);
                int j = 0;
                notfound = 1;
                for (i = 0; i < size; i++) {
                    if (array[i] != num) {
                        array[j++] = array[i];
                    } else {
                        notfound = 0;
                    }
                }
                if (notfound) {
                    printf("\nElement not found.\n");
                } else {
                    size = j;
                    printf("\nArray after deleting number %d: \n", num);
                    for (i = 0; i < size; i++) {
                        printf("%d\t", array[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                if (size == 0) {
                    printf("Array is not initialized.\n");
                } else {
                    printf("\nElements in the array are: ");
                    for (i = 0; i < size; i++) {
                        printf("%d\t", array[i]);
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Enter choice properly...\n");
                break;
        }
    }
    return 0;
}

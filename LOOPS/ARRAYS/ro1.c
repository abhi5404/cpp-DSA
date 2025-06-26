#include <stdio.h>

#define MAX_SIZE 50

int main() {
    int choice, continue_program = 1;

    while (continue_program) {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int a[MAX_SIZE], size, i, num, pos;

                printf("Enter the size of the array (max %d): ", MAX_SIZE);
                scanf("%d", &size);

                if (size >= MAX_SIZE) {
                    printf("Size exceeds maximum allowed size.\n");
                    break;
                }

                printf("Enter elements of the array:\n");
                for (i = 0; i < size; i++) {
                    scanf("%d", &a[i]);
                }

                printf("Elements in the array are: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");

                printf("Enter the number you want to insert: ");
                scanf("%d", &num);
                
                printf("Enter the position (0 to %d): ", size);
                scanf("%d", &pos);

                if (pos < 0 || pos > size) {
                    printf("Invalid position.\n");
                    break;
                }

                // Shift elements to the right
                for (i = size; i > pos; i--) {
                    a[i] = a[i - 1];
                }

                a[pos] = num;
                size++;

                printf("After insertion, new array's elements are: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            break;

            case 2: {
                int b[MAX_SIZE], size2, j, posi;

                printf("Enter the size of the array (max %d): ", MAX_SIZE);
                scanf("%d", &size2);

                if (size2 >= MAX_SIZE) {
                    printf("Size exceeds maximum allowed size.\n");
                    break;
                }

                printf("Enter elements of the array:\n");
                for (j = 0; j < size2; j++) {
                    scanf("%d", &b[j]);
                }

                printf("Elements in the array are: ");
                for (j = 0; j < size2; j++) {
                    printf("%d ", b[j]);
                }
                printf("\n");

                printf("Enter the position (0 to %d): ", size2 - 1);
                scanf("%d", &posi);

                if (posi < 0 || posi >= size2) {
                    printf("Invalid position.\n");
                    break;
                }

                // Shift elements to the left
                for (j = posi; j < size2 - 1; j++) {
                    b[j] = b[j + 1];
                }

                size2--;

                printf("After deletion, new array's elements are: ");
                for (j = 0; j < size2; j++) {
                    printf("%d ", b[j]);
                }
                printf("\n");
            }
            break;

            case 3:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }

        // Ask the user if they want to continue
        printf("\nEnter 1 to continue, or 0 to exit: ");
        scanf("%d", &continue_program);
    }

    return 0;
}




#include <stdio.h>

void main() {
    int stack[100], sel, top = -1, max, item, i, ch;
    
    printf("Enter stack limit: ");
    scanf("%d", &max);

    do {
        printf("\nOperations\n");
        printf("_ _ _ _ _ _ _\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek Element\n");
        printf("4. Count\n");
        printf("5. Display Stack\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                // Push operation
                if (top == max - 1) {
                    printf("Overflow: Stack is full!\n");
                } else {
                    printf("Enter the element to be inserted: ");
                    scanf("%d", &item);
                    top = top + 1;
                    stack[top] = item;
                    printf("Element pushed: %d\n", item);
                }
                break;
            }
            case 2: {
                // Pop operation
                if (top == -1) {
                    printf("Underflow: No element to delete.\n");
                } else {
                    printf("Element popped: %d\n", stack[top]);
                    top = top - 1;
                }
                break;
            }
            case 3: {
                // Peek operation
                if (top == -1) {
                    printf("No elements in stack.\n");
                } else {
                    printf("Peek element: %d\n", stack[top]);
                }
                break;
            }
            case 4: {
                // Count operation
                if (top == -1) {
                    printf("No elements in stack.\n");
                } else {
                    printf("Number of elements in stack: %d\n", top + 1);
                }
                break;
            }
            case 5: {
                // Display stack operation
                if (top == -1) {
                    printf("No elements in stack.\n");
                } else {
                    printf("Stack: ");
                    for (i = 0; i <= top; i++) {
                        printf("%d ", stack[i]);  // Added space between elements for clarity
                    }
                    printf("\n");
                }
                break;
            }
            case 6:
                // Exit operation
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        
        printf("\n Do you want to continue (1/0): ");
        scanf("%d", &sel);

        
        if (sel != 1 && sel != 0) {
            printf("Invalid input. Exiting program.\n");
            break;
        }

    } while (sel == 1);

}

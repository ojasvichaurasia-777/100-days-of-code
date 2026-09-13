// Insert an element in an array at a given position.
#include <stdio.h>
void insertAtPosition(int arr[], int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[position] = element; // Insert the new element
    (*size)++; // Increase the size of the array
}

// Delete an element from an array.
#include <stdio.h>
void deleteElement(int arr[], int *size, int element) {
    int i, found = 0;
    for (i = 0; i < *size; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
        return;
    }

    for (; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    (*size)--; // Decrease the size of the array
}

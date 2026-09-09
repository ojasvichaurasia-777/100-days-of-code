// Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int arr[10];
    int search_element;
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &search_element);
    for(int i = 0; i < 10; i++) {
        if(arr[i] == search_element) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found in the array\n");
    return 0;
}
// Reverse an array without taking extra space.
#include <stdio.h>
int main() {
    int arr[10];
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++) {
        int temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    printf("Reversed array:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

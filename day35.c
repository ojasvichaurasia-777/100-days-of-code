// Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;
    first = second = -2147483648; // Initialize to minimum integer value

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
// Rotate an array to the right by k positions.
#include <stdio.h>
void rotateArray(int arr[], int n, int k) {
    k = k % n; // In case k is greater than n
    int temp[k];
    
    // Store the last k elements in a temporary array
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    // Shift the remaining elements to the right
    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    // Copy the temporary array back to the original array
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

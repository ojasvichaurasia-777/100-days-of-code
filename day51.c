// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

// Function to find the first or last occurrence of the target using Binary Search
int findOccurrence(int nums[], int n, int target, int findFirst) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result = mid; // Record the index found so far
            
            if (findFirst) {
                high = mid - 1; // Keep searching on the left side for the first occurrence
            } else {
                low = mid + 1;  // Keep searching on the right side for the last occurrence
            }
        } 
        else if (nums[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    // Input the size of the array
    printf("Enter the number of elements in the sorted array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[n];

    // Input the sorted array elements
    printf("Enter %d sorted elements (duplicates allowed):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input the target element to search for
    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first and last occurrences
    int first = findOccurrence(nums, n, target, 1);
    int last = findOccurrence(nums, n, target, 0);

    // Print the results as requested
    printf("%d, %d\n", first, last);

    return 0;
}


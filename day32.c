// Merge two arrays.
#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
    int size1, size2, i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        merged[i + j] = arr2[j];
    }

    printf("Merged array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int number, digitCount[10] = {0}, maxDigit = 0, maxCount = 0;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Count the occurrences of each digit
    while (number != 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", maxDigit, maxCount);
    return 0;
}
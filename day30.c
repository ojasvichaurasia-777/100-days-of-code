// Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int arr[10];
    int even_count = 0, odd_count = 0;
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("Number of even numbers in the array: %d\n", even_count);
    printf("Number of odd numbers in the array: %d\n", odd_count);
    return 0;
}
// Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int arr[10];
    int positive_count = 0, negative_count = 0, zero_count = 0;
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] > 0) {
            positive_count++;
        } else if(arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("Number of positive numbers in the array: %d\n", positive_count);
    printf("Number of negative numbers in the array: %d\n", negative_count);
    printf("Number of zero elements in the array: %d\n", zero_count);
    return 0;
}

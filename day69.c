// Write a program to take an integer array as input. 
// Only one element will be repeated. Print the repeated element.
//  Try to find the result in one single iteration.
#include <stdio.h>
int findRepeatedElement(int arr[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= arr[i]; // XOR all elements in the array
    }

    for (int i = 1; i < n; i++) {
        result ^= i; // XOR with all numbers from 1 to n-1
    }

    return result; // The repeated element
}
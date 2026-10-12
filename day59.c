// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int max_sum_subarray(int arr[], int n, int k) {
    int max_sum = 0;
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }
    int current_sum = max_sum;
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    return max_sum;
}
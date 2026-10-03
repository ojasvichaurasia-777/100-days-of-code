// Write a program to take an integer array nums of size n, and print the majority element. 
// The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists.
//  Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>
int find_majority_element(int nums[], int n) {
    int count = 0;
    int candidate = -1;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify if the candidate is indeed the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

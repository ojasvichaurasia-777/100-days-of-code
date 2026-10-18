// Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs.
//  The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume 
//  exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. 
//  If no solution exists, print "-1 -1".
#include <stdio.h>
int main() {
    int nums[100], target, size, i, j;
    int found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target value: ");
    scanf("%d", &target);

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("-1 -1\n");
    }

    return 0;
}


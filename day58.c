// Write a Program to take an integer array nums. Print an array answer such that answer[i] 
// is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix 
// of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
void product_except_self(int nums[], int n) {
    int answer[n];
    int left_product = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = left_product;
        left_product *= nums[i];
    }
    int right_product = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= right_product;
        right_product *= nums[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

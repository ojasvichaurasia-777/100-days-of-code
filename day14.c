// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}
// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, product = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d is: %d\n", n, product);
    return 0;
}
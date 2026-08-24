// Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %lld", n, factorial);
    return 0;
}

// Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d", reversed);
    return 0;
}

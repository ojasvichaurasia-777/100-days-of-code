// Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the larger number
    if (num1 > num2)
        lcm = num1;
    else
        lcm = num2;

    // Keep incrementing the larger number until it is divisible by both numbers
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            printf("LCM of %d and %d is %d", num1, num2, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
// Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add it to the sum
        num /= 10;        // Remove the last digit
    }

    printf("Sum of digits is: %d", sum);
    return 0;
}
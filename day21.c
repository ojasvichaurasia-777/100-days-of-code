// Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int number, firstDigit, lastDigit, numDigits = 0, temp, swappedNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    lastDigit = temp % 10;

    // Count the number of digits and find the first digit
    while (temp != 0) {
        firstDigit = temp % 10;
        temp /= 10;
        numDigits++;
    }

    // Calculate the swapped number
    swappedNumber = lastDigit * pow(10, numDigits - 1) + (number % (int)pow(10, numDigits - 1)) / 10 * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNumber);
    return 0;
}
// Write a program to check if a number is a perfect number.
#include <stdio.h>
int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}


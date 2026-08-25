// Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, i;
    int binary[32];

    printf("Enter a number: ");
    scanf("%d", &n);

    i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
// Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, reversed = 0, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int number, digit, product = 1;
    int hasOddDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Product of odd digits: 0\n");
        return 0;
    }

    while (number > 0) {
        digit = number % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigit = 1;
        }
        number /= 10;
    }

    if (hasOddDigit) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    long long binary, temp;
    int remainder, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while (temp != 0) {
        remainder = temp % 10;
        if (remainder == 0) {
            onesComplement += 1 * place;
        }
        place *= 10;
        temp /= 10;
    }

    printf("1's complement of %lld is %d\n", binary, onesComplement);
    return 0;
}


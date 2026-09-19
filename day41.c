// Count characters in a string without using built-in length functions.
#include <stdio.h>
#include <string.h>

int count_characters(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[] = "Hello, World!";
    printf("Number of characters in the string: %d\n", count_characters(str));
    return 0;
}
// Print each character of a string on a new line.
#include <stdio.h>

void print_characters(const char *str) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    print_characters(str);
    return 0;
}
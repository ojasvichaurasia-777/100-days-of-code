// Count spaces, digits, and special characters in a string.
#include <stdio.h>
void count_characters(const char *str, int *spaces, int *digits, int *specials) {
    *spaces = 0;
    *digits = 0;
    *specials = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            (*spaces)++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            (*digits)++;
        } else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // Do nothing for alphabetic characters
        } else {
            (*specials)++;
        }
    }
}
// Replace spaces with hyphens in a string.
#include <stdio.h>
void replace_spaces_with_hyphens(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}
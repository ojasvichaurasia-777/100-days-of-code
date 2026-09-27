// Check if one string is a rotation of another.
#include <stdio.h>
int isRotation(char str1[], char str2[]) {
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) {
        return 0; // Not rotations if lengths differ
    }

    char temp[200]; // Assuming the combined length won't exceed 200
    for (int i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }
    for (int i = 0; i < len2; i++) {
        temp[len1 + i] = str1[i];
    }
    temp[len1 + len2] = '\0';

    // Check if str2 is a substring of temp
    for (int i = 0; i <= len1 + len2 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; // str2 is a rotation of str1
        }
    }

    return 0; // Not a rotation
}
// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
void reverseWord(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

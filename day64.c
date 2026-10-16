// Write a program to take a string s as input. 
// The task is to find the length of the longest substring without 
// repeating characters. Print the length as output.
#include <stdio.h>
int lengthOfLongestSubstring(char *s) {
    int maxLength = 0;
    int start = 0;
    int charIndex[256] = {0}; // Array to store the last index of each character

    for (int end = 0; s[end] != '\0'; end++) {
        char currentChar = s[end];

        // If the character has been seen before and is within the current substring
        if (charIndex[(unsigned char)currentChar] > start) {
            start = charIndex[(unsigned char)currentChar];
        }

        // Update the last index of the current character
        charIndex[(unsigned char)currentChar] = end + 1;

        // Update the maximum length found so far
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
        }
    }

    return maxLength;
}
// Check if two strings are anagrams of each other.
#include <stdio.h>
int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};
    int i;

    for(i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
    }

    for(i = 0; i < 256; i++) {
        if(count[i] != 0) {
            return 0; // Not anagrams
        }
    }
    return 1; // Anagrams
}
// Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
char* findLongestWord(char sentence[]) {
    char* longestWord = NULL;
    char* currentWord = strtok(sentence, " ");
    int maxLength = 0;

    while(currentWord != NULL) {
        int currentLength = strlen(currentWord);
        if(currentLength > maxLength) {
            maxLength = currentLength;
            longestWord = currentWord;
        }
        currentWord = strtok(NULL, " ");
    }

    return longestWord;
}

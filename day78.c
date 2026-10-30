// Read a text file and count how many vowels and
//  consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
int main() 
{
    FILE *file = fopen("input.txt", "r");
    if (!file) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    char c;

    while ((c = fgetc(file)) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            c += 32; // Convert to lowercase
        }
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

// Write a program that reads text from input.txt,
//  converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    if (!input_file || !output_file) {
        fprintf(stderr, "Error opening files.\n");
        return 1;
    }

    int c;
    while ((c = fgetc(input_file)) != EOF) {
        fputc(toupper(c), output_file);
    }

    fclose(input_file);
    fclose(output_file);
    return 0;
}
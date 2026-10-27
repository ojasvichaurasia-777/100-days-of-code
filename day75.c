// Open an existing file in append mode and allow the user
//  to enter a new line of text. Append the text at the end
//   without overwriting existing content.
#include <stdio.h>
int main() {
    FILE *file;
    char text[100];

    // Open the file in append mode
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Prompt the user for input
    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fprintf(file, "%s", text);

    // Close the file
    fclose(file);

    printf("Text appended successfully.\n");
    return 0;
}

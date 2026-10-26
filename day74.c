// Take two filenames from the user – a source file
//  and a destination file. Copy all the content from 
//  the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    // Get source and destination filenames from the user
    printf("Enter source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter destination filename: ");
    scanf("%s", destFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied from %s to %s successfully.\n", sourceFilename, destFilename);
    
    return 0;
}
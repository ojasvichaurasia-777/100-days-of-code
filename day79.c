// A file numbers.txt contains a list of integers
//  separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>
int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float average;

    // Open the file for reading
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Could not open file numbers.txt\n");
        return 1;
    }

    // Read integers from the file and compute sum and count
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate average
    if (count > 0) {
        average = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}
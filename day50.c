// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[] = "15/04/2023";
    char month[4];
    char new_date[12];

    // Extract the month
    strncpy(month, date + 3, 2);
    month[2] = '\0';

    // Convert month number to name
    if (strcmp(month, "04") == 0) {
        strcpy(month, "Apr");
    }

    // Construct the new date format
    snprintf(new_date, sizeof(new_date), "%.*s-%s-%.*s", 2, date, month, 4, date + 6);

    printf("Original date: %s\n", date);
    printf("New date: %s\n", new_date);

    return 0;
}
// Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    int len = strlen(str);

    printf("All sub-strings of \"%s\":\n", str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            printf("%.*s\n", j - i, str + i);
        }
    }

    return 0;
}

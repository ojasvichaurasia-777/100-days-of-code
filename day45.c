// // Count frequency of a given character in a string.
// #include <stdio.h>

// int countFrequency(char *str, char ch) {
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     char str[100];
//     char ch;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     printf("Enter a character to count: ");
//     scanf(" %c", &ch);
//     int frequency = countFrequency(str, ch);
//     printf("Frequency of '%c' in the string is: %d\n", ch, frequency);
//     return 0;
// }
// Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }
    printf("Toggled case string: %s", str);

    return 0;
}


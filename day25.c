// Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345
#include <stdio.h>
int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; --i) {
        for (j = i; j <= rows; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>
int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j < i; ++j) {
            printf(" ");
        }
        for (j = i; j <= rows; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

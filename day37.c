// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int matrix[3][3], rowSum[3] = {0};
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    return 0;
}
// Find the transpose of a matrix.
#include <stdio.h>
int main() {
    int matrix[3][3], transpose[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}


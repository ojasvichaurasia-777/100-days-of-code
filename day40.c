// Perform diagonal traversal of a matrix.
void diagonalTraversal(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
}
// Multiply two matrices.
void multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

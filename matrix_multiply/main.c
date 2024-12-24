#include <stdio.h>

void multiplyMatrices(int rowsA, int colsA, int colsB, int A[rowsA][colsA], int B[colsA][colsB], int result[rowsA][colsB]) {
    // Initialize the result matrix with zeros
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void inputMatrix(int rows, int cols, int matrix[rows][cols], char name) {
    printf("Enter elements of matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions for Matrix A
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    // Input dimensions for Matrix B
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    // Check if matrices can be multiplied
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible. Columns of A must match rows of B.\n");
        return 1;
    }

    // Define matrices
    int A[rowsA][colsA];
    int B[rowsB][colsB];
    int result[rowsA][colsB];

    // Input elements for matrices A and B
    inputMatrix(rowsA, colsA, A, 'A');
    inputMatrix(rowsB, colsB, B, 'B');

    // Multiply matrices
    multiplyMatrices(rowsA, colsA, colsB, A, B, result);

    // Print the result
    printf("Resultant Matrix:\n");
    printMatrix(rowsA, colsB, result);

    return 0;
}

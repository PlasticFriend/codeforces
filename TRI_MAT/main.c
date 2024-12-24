#include <stdio.h>

int main() {
    int rows, cols, i, j, isUpper = 1, isLower = 1;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("The matrix is not square. Please enter a square matrix.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for upper triangular matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                isUpper = 0;
                break;
            }
        }
    }

    // Check for lower triangular matrix
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < cols; j++) {
            if (matrix[i][j] != 0) {
                isLower = 0;
                break;
            }
        }
    }

    if (isUpper) {
        printf("The matrix is an upper triangular matrix.\n");
    } else if (isLower) {
        printf("The matrix is a lower triangular matrix.\n");
    } else {
        printf("The matrix is neither upper nor lower triangular.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int transpose[cols][rows];

    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("\nTranspose Matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

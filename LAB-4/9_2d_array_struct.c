#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int **arr;  // Pointer to 2D array
    int rows;
    int cols;
} Matrix;

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    Matrix matrix;
    matrix.rows = rows;
    matrix.cols = cols;

    matrix.arr = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix.arr[i] = (int*)malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix.arr[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix.arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(matrix.arr[i]); 
    }
    free(matrix.arr); 

    return 0;
}
